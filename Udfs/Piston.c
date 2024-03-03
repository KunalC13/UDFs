#include "udf.h"

DEFINE_EXECUTE_AT_END(piston_motion)
{
    Domain *domain;
    Thread *t;
    cell_t c;
    real dt;
    real velocity = 0.01;  
    real target_pressure = 1.0e6; 
    real cog_position = 0.3;
    real piston_mass = 5.0;
	real max_displacement = 0.2;

    domain = Get_Domain(1);

    dt = CURRENT_TIMESTEP;

    thread_loop_c(t, domain)
    {
        if (THREAD_TYPE(t) == THREAD_FLUID)
        {
            begin_c_loop_all(c, t)
            {
                real p = C_P(c, t);
                real y = C_Y(c, t); 

            
                if (p < target_pressure)
                {
                
                    real piston_position = cog_position + C_UDSI(c, t, 0);
                    piston_position += velocity * dt;

                
                    C_UDSI(c, t, 0) = piston_position - cog_position;

                 
                    real force = (target_pressure - p) * C_VOLUME(c, t);

                   
                    real acceleration = force / piston_mass;

                 
                    velocity += acceleration * dt;
                }
            }
            end_c_loop_all(c, t)
        }
    }
}
