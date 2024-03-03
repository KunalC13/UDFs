#include "udf.h"

DEFINE_SDOF_PROPERTIES(piston1, prop, vel, omega, dt, time, dtime)
{
    prop[SDOF_MASS] = 5;
    prop[SDOF_IZZ] = 5;

    NV_S (vel, =, 0.0)
    NV_S (omega, =, 0.0)



    if (time <= 0.5)
    {
        vel[0] = 0.75;
    }

    else if (time>0.5 && time <=2)
    {
        vel[0] = 0;
    }
    else
    {
        vel[0] = -0.5
    }

    prop[SDOF_MASS] = 5;
    prop[SDOF_IXX] = 0.011167;
    prop[SDOF_IYY] = 0.011167;
    prop[SDOF_IZZ] = 0.02025;
    prop[SDOF_IXY] = 0;
    prop[SDOF_IYZ] = 0;
    prop[SDOF_IXZ] = 0;
    
    prop[SDOF_ZERO_TRANS_Y] = TRUE;
}