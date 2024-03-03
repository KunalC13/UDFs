#include "udf.h"

DEFINE_CG_MOTION(piston_motion1, dt, vel, omega, time, dtime)
{
    real t = CURRENT_TIME;
    real initial_duration = 0.1; 
    real acceleration_duration = 0.12; 
    real initial_velocity = -1; 
    real acceleration = 5.0; 

    NV_S(vel, =, 0.0);  

    if (t <= initial_duration)
    {
        vel[1] = initial_velocity; 
    }
    else if (t <= initial_duration + acceleration_duration)
    {
        vel[1] = initial_velocity + acceleration * (t - initial_duration);
    }
    else
    {
        vel[1] = initial_velocity + acceleration * acceleration_duration; 
    }
}
