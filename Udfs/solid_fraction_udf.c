#include "udf.h"

DEFINE_PROPERTY(solid_fraction, c, t)
{
    real temperature = C_T(c, t); // Temperature at cell centroid
    real solid_fraction;

    // Define your temperature-solid fraction relationship here
    if (temperature >= 450.0408 && temperature <= 454.5209)
    {
        solid_fraction = 1.0;
    }
    if (temperature >= 454.5209 && temperature <= 459.6309)
    {
        solid_fraction = 0.983887;
    }
    if (temperature >= 459.6309 && temperature <= 464.7509)
    {
        solid_fraction = 0.982073;
    }
    if (temperature >= 464.7509 && temperature <= 469.8708)
    {
        solid_fraction = 0.979844;
    }
    if (temperature >= 469.8708 && temperature <= 474.9908)
    {
        solid_fraction = 0.977032;
    }
    if (temperature >= 474.9908 && temperature <= 480.1108)
    {
        solid_fraction = 0.973358;
    }
    if (temperature >= 480.1108 && temperature <= 485.2308)
    {
        solid_fraction = 0.968345;
    }
    if (temperature >= 485.2308 && temperature <= 490.3508)
    {
        solid_fraction = 0.961092;
    }
    if (temperature >= 490.3508 && temperature <= 495.4547)
    {
        solid_fraction = 0.949697;
    }
    if (temperature >= 495.4547 && temperature <= 499.9123)
    {
        solid_fraction = 0.92942;
    }
    if (temperature >= 499.9123 && temperature <= 501.7908)
    {
        solid_fraction = 0.912295;
    }
    if (temperature >= 501.7908 && temperature <= 506.9109)
    {
        solid_fraction = 0.910064;
    }
    if (temperature >= 506.9109 && temperature <= 512.0309)
    {
        solid_fraction = 0.90275;
    }
    if (temperature >= 512.0309 && temperature <= 517.1409)
    {
        solid_fraction = 0.892787;
    }
    if (temperature >= 517.1409 && temperature <= 521.6208)
    {
        solid_fraction = 0.878219;
    }
    if (temperature >= 521.6208 && temperature <= 524.8102)
    {
        solid_fraction = 0.85811;
    }
    if (temperature >= 524.8102 && temperature <= 527.1309)
    {
        solid_fraction = 0.835481;
    }
    if (temperature >= 527.1309 && temperature <= 532.2509)
    {
        solid_fraction = 0.828592;
    }
    if (temperature >= 532.2509 && temperature <= 536.7308)
    {
        solid_fraction = 0.810482;
    }
    if (temperature >= 536.7308 && temperature <= 540.5709)
    {
        solid_fraction = 0.790187;
    }
    if (temperature >= 540.5709 && temperature <= 543.7709)
    {
        solid_fraction = 0.76804;
    }
    if (temperature >= 543.7709 && temperature <= 546.3309)
    {
        solid_fraction = 0.744861;
    }
    if (temperature >= 546.3309 && temperature <= 548.2509)
    {
        solid_fraction = 0.722084;
    }
    if (temperature >= 548.2509 && temperature <= 550.1708)
    {
        solid_fraction = 0.701753;
    }
    if (temperature >= 550.1708 && temperature <= 552.0909)
    {
        solid_fraction = 0.677853;
    }
    if (temperature >= 552.0909 && temperature <= 553.3708)
    {
        solid_fraction = 0.649403;
    }
    if (temperature >= 553.3708 && temperature <= 554.6509)
    {
        solid_fraction = 0.627255;
    }
    if (temperature >= 554.6509 && temperature <= 555.9308)
    {
        solid_fraction = 0.60195;
    }
    if (temperature >= 555.9308 && temperature <= 557.2009)
    {
        solid_fraction = 0.572796;
    }
    if (temperature >= 557.2009 && temperature <= 557.3008)
    {
        solid_fraction = 0.539217;
    }
    if (temperature >= 557.3008 && temperature <= 558.5809)
    {
        solid_fraction = 0.536577;
    }
    if (temperature >= 558.5809 && temperature <= 559.2209)
    {
        solid_fraction = 0.499724;
    }
    if (temperature >= 559.2209 && temperature <= 559.8608)
    {
        solid_fraction = 0.478951;
    }
    if (temperature >= 559.8608 && temperature <= 560.5009)
    {
        solid_fraction = 0.456346;
    }
    if (temperature >= 560.5009 && temperature <= 561.1409)
    {
        solid_fraction = 0.431662;
    }
    if (temperature >= 561.1409 && temperature <= 561.7809)
    {
        solid_fraction = 0.404611;
    }
    if (temperature >= 561.7809 && temperature <= 562.4106)
    {
        solid_fraction = 0.374846;
    }
    if (temperature >= 562.4106 && temperature <= 562.4808)
    {
        solid_fraction = 0.342577;
    }
    if (temperature >= 562.4808 && temperature <= 562.8809)
    {
        solid_fraction = 0.338856;
    }
    if (temperature >= 562.8809 && temperature <= 563.501)
    {
        solid_fraction = 0.316805;
    }
    if (temperature >= 563.501 && temperature <= 565.8608)
    {
        solid_fraction = 0.279489;
    }
    if (temperature >= 565.8608 && temperature <= 568.4208)
    {
        solid_fraction = 0.260837;
    }
    if (temperature >= 568.4208 && temperature <= 570.9808)
    {
        solid_fraction = 0.239401;
    }
    if (temperature >= 570.9808 && temperature <= 573.5408)
    {
        solid_fraction = 0.216601;
    }
    if (temperature >= 573.5408 && temperature <= 576.1008)
    {
        solid_fraction = 0.192306;
    }
    if (temperature >= 576.1008 && temperature <= 578.0209)
    {
        solid_fraction = 0.166364;
    }
    if (temperature >= 578.0209 && temperature <= 579.9409)
    {
        solid_fraction = 0.145727;
    }
    if (temperature >= 579.9409 && temperature <= 581.8608)
    {
        solid_fraction = 0.123988;
    }
    if (temperature >= 581.8608 && temperature <= 583.7809)
    {
        solid_fraction = 0.101058;
    }
    if (temperature >= 583.7809 && temperature <= 585.6874)
    {
        solid_fraction = 0.076839;
    }
    if (temperature >= 585.6874 && temperature <= 585.7509)
    {
        solid_fraction = 0.051409;
    }
    if (temperature >= 585.7509 && temperature <= 590.7908)
    {
        solid_fraction = 0.051391;
    }
    if (temperature >= 590.7908 && temperature <= 595.9109)
    {
        solid_fraction = 0.049897;
    }
    if (temperature >= 595.9109 && temperature <= 601.0309)
    {
        solid_fraction = 0.048231;
    }
    if (temperature >= 601.0309 && temperature <= 606.1509)
    {
        solid_fraction = 0.046404;
    }
    if (temperature >= 606.1509 && temperature <= 611.2709)
    {
        solid_fraction = 0.044401;
    }
    if (temperature >= 611.2709 && temperature <= 616.3909)
    {
        solid_fraction = 0.04221;
    }
    if (temperature >= 616.3909 && temperature <= 621.5109)
    {
        solid_fraction = 0.039818;
    }
    if (temperature >= 621.5109 && temperature <= 626.6309)
    {
        solid_fraction = 0.037207;
    }
    if (temperature >= 626.6309 && temperature <= 631.7509)
    {
        solid_fraction = 0.034363;
    }
    if (temperature >= 631.7509 && temperature <= 632.3909)
    {
        solid_fraction = 0.031267;
    }
    else
    {
        solid_fraction = 0.0; // Return a default value for out-of-range temperatures
    }

    return solid_fraction;
}
