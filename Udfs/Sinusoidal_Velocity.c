/************************************
Translational Velocity
*********************/

DEFINE_CG_MOTION(piston,dt,vel,omega,time,dtime )
{
Thread *t;
face_t f; /* define the variables */

t = DT_THREAD(dt); /* get the thread pointer for which the motion is defined */

/* if (!Data_Valid_P())
/* return; /* check if the values of the variables are accessible before you compute the function */

begin_f_loop(f,t) /* loop over each face in the zone to create an array of data */
{
if (time <= 0.28)
vel[1] = -0.05; /* define the velocity of the moving zone---*/
else
vel[1] = 0;
}
end_f_loop(f,t)
}

