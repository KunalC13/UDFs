#include "udf.h"
DEFINE_CG_MOTION(piston_motion1, dt, vel, omega, time, dtime)
{
    real t = CURRENT_TIME; 

    NV_S(vel, =, 0.0);  


    if (t <= 0.28)  
    {
        vel[1] = -0.5; 
    }
    else
    {
        vel[1] = 0.0;  
    }

}
