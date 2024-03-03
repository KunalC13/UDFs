#include "udf.h"

DEFINE_CG_MOTION(piston_lower, dt, vel, omega, time, dtime)
{
    real t = CURRENT_TIME; 

    NV_S(vel, =, 0.0);  

    if (t <= 0.0113) 
    {
        vel[1] = -1.5; 
    }        

    else
    {
        vel[1] = 0.0;  
    }

}