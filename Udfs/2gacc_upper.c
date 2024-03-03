#include "udf.h"
#include <stdio.h>

static real v_prev = -1.5;  
static real total_displacement = 0.0; 
static int time_step_counter = 0; 

DEFINE_CG_MOTION(piston,dt,vel,omega,time,dtime)
{
    Thread *t;
    face_t f;
    real NV_VEC(A);
    real force, dv;
    real g = 9.81;             
    real acc = -2 * g;      

    /* reset velocities */
    NV_S(vel, =, 0.0);
    NV_S(omega, =, 0.0);

    if (!Data_Valid_P())
        return;


    t = DT_THREAD(dt);

    force = 0.0;
    begin_f_loop(f,t)
    {
        F_AREA(A,f,t);
        force += F_P(f,t) * NV_MAG(A);
    }
    end_f_loop(f,t)

    /* compute change in velocity, i.e., dv = (F * dt / mass) + (acc * dt)
       velocity update using explicit Euler formula */
    dv = (dtime * force / 50.0) + (acc * dtime);
    v_prev += dv;


    real expected_displacement = total_displacement + (v_prev * dtime);


    if (expected_displacement > 0.095)
    {
        v_prev = 0.0; 
        total_displacement = 0.095; 
    }
    else
    {
        total_displacement += v_prev * dtime; 
    }

    Message ("time = %f, y_vel = %f, force = %f, total_displacement = %f\n", time, v_prev, force, total_displacement);


    vel[1] = v_prev;

    time_step_counter++;


    if (time_step_counter == 50)
    {
        FILE *fp;
        fp = fopen("wall_velocity.txt", "a"); 
        if (fp != NULL)
        {
            fprintf(fp, "Time: %f, Wall Velocity: %f\n", time, v_prev);
            fclose(fp);
        }
        time_step_counter = 0; 
}