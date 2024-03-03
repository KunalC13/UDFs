#include "udf.h"

DEFINE_PROPERTY(viscosity, c, t)
{
    real temperature = C_T(c, t); // Temperature at cell centroid
    real viscosity;

    // Define your temperature-viscosity relationship here
    if (temperature >= 454.5209 && temperature <= 464.7509)
    {
        viscosity = 2.682492;
    }
    if (temperature >= 464.7509 && temperature <= 474.9908)
    {
        viscosity = 2.704399;
    }
    if (temperature >= 474.9908 && temperature <= 485.2308)
    {
        viscosity = 2.72053;
    }
    if (temperature >= 485.2308 && temperature <= 495.4547)
    {
        viscosity = 2.731198;
    }
    if (temperature >= 495.4547 && temperature <= 501.7908)
    {
        viscosity = 2.735075;
    }
    if (temperature >= 501.7908 && temperature <= 512.0309)
    {
        viscosity = 2.686508;
    }
    if (temperature >= 512.0309 && temperature <= 521.6208)
    {
        viscosity = 2.528033;
    }
    if (temperature >= 521.6208 && temperature <= 527.1309)
    {
        viscosity = 2.383039;
    }
    if (temperature >= 527.1309 && temperature <= 536.7308)
    {
        viscosity = 2.308537;
    }
    if (temperature >= 536.7308 && temperature <= 543.7709)
    {
        viscosity = 2.187502;
    }
    if (temperature >= 543.7709 && temperature <= 548.2509)
    {
        viscosity = 2.100325;
    }
    if (temperature >= 548.2509 && temperature <= 552.0909)
    {
        viscosity = 2.045572;
    }
    if (temperature >= 552.0909 && temperature <= 554.6509)
    {
        viscosity = 1.999135;
    }
    if (temperature >= 554.6509 && temperature <= 557.2009)
    {
        viscosity = 1.968456;
    }
    if (temperature >= 557.2009 && temperature <= 558.5809)
    {
        viscosity = 1.938138;
    }
    if (temperature >= 558.5809 && temperature <= 559.8608)
    {
        viscosity = 1.921621;
    }
    if (temperature >= 559.8608 && temperature <= 561.1409)
    {
        viscosity = 1.906352;
    }
    if (temperature >= 561.1409 && temperature <= 562.4106)
    {
        viscosity = 1.891135;
    }
    if (temperature >= 562.4106 && temperature <= 562.8809)
    {
        viscosity = 1.876095;
    }
    if (temperature >= 562.8809 && temperature <= 565.8608)
    {
        viscosity = 1.870525;
    }
    if (temperature >= 565.8608 && temperature <= 570.9808)
    {
        viscosity = 1.844208;
    }
    if (temperature >= 570.9808 && temperature <= 576.1008)
    {
        viscosity = 1.803886;
    }
    if (temperature >= 576.1008 && temperature <= 579.9409)
    {
        viscosity = 1.764719;
    }
    if (temperature >= 579.9409 && temperature <= 583.7809)
    {
        viscosity = 1.736075;
    }
    if (temperature >= 583.7809 && temperature <= 585.7509)
    {
        viscosity = 1.708038;
    }
    if (temperature >= 585.7509 && temperature <= 595.9109)
    {
        viscosity = 1.694049;
    }
    if (temperature >= 595.9109 && temperature <= 606.1509)
    {
        viscosity = 1.64897;
    }
    if (temperature >= 606.1509 && temperature <= 616.3909)
    {
        viscosity = 1.605934;
    }
    if (temperature >= 616.3909 && temperature <= 626.6309)
    {
        viscosity = 1.565168;
    }
    if (temperature >= 626.6309 && temperature <= 636.8708)
    {
        viscosity = 1.526549;
    }
    if (temperature >= 636.8708 && temperature <= 644.9709)
    {
        viscosity = 1.489959;
    }
    if (temperature >= 644.9709 && temperature <= 655.2109)
    {
        viscosity = 1.46219;
    }
    if (temperature >= 655.2109 && temperature <= 665.4509)
    {
        viscosity = 1.428355;
    }
    if (temperature >= 665.4509 && temperature <= 675.6909)
    {
        viscosity = 1.39633;
    }
    if (temperature >= 675.6909 && temperature <= 685.9141)
    {
        viscosity = 1.366014;
    }
    if (temperature >= 685.9141 && temperature <= 693.7709)
    {
        viscosity = 1.337367;
    }
    if (temperature >= 693.7709 && temperature <= 704.0109)
    {
        viscosity = 1.314509;
    }
    if (temperature >= 704.0109 && temperature <= 714.2509)
    {
        viscosity = 1.285834;
    }
    if (temperature >= 714.2509 && temperature <= 724.4908)
    {
        viscosity = 1.258356;
    }
    if (temperature >= 724.4908 && temperature <= 734.7309)
    {
        viscosity = 1.23201;
    }
    if (temperature >= 734.7309 && temperature <= 744.9709)
    {
        viscosity = 1.206736;
    }
    if (temperature >= 744.9709 && temperature <= 755.2109)
    {
        viscosity = 1.182478;
    }
    if (temperature >= 755.2109 && temperature <= 765.4509)
    {
        viscosity = 1.159183;
    }
    if (temperature >= 765.4509 && temperature <= 775.6909)
    {
        viscosity = 1.136803;
    }
    if (temperature >= 775.6909 && temperature <= 785.9309)
    {
        viscosity = 1.115292;
    }
    if (temperature >= 785.9309 && temperature <= 796.1709)
    {
        viscosity = 1.094609;
    }
    if (temperature >= 796.1709 && temperature <= 806.4109)
    {
        viscosity = 1.074716;
    }
    if (temperature >= 806.4109 && temperature <= 816.6509)
    {
        viscosity = 1.055575;
    }
    if (temperature >= 816.6509 && temperature <= 826.8909)
    {
        viscosity = 1.037154;
    }
    if (temperature >= 826.8909 && temperature <= 834.6609)
    {
        viscosity = 1.019422;
    }
    if (temperature >= 834.6609 && temperature <= 844.9009)
    {
        viscosity = 1.006407;
    }
    if (temperature >= 844.9009 && temperature <= 855.1409)
    {
        viscosity = 0.989808;
    }
    if (temperature >= 855.1409 && temperature <= 865.3809)
    {
        viscosity = 0.973821;
    }
    if (temperature >= 865.3809 && temperature <= 875.6108)
    {
        viscosity = 0.958422;
    }
    else
    {
        viscosity = 0.0; // Return a default value for out-of-range temperatures
    }

    return viscosity;
}
