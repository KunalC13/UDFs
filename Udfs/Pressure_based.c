#include "udf.h"
 DEFINE_ADJUST(Pressure_based,velocity)
 {
 Thread *t;
 cell_t c;
 real velocity = 0.02;
 /* Do nothing if gradient isn’t allocated yet. */
 if (! Data_Valid_P())
 return;
 thread_loop_c(t,d)
 {
 if (FLUID_THREAD_P(t)) = 10^6
 {
 begin_c_loop_all(c,t)
 {
 C_UDSI(c,t,1) +=  velocity = 0;
 }
 end_c_loop_all(c,t)
 }
 }
 }