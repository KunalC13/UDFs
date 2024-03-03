#include "udf.h"

DEFINE_PROPERTY(enthalpy, c, t)
{
    real temperature = C_T(c, t);
    real enthalpy;

    if (temperature >= 30.28085 && temperature <= 40.52087)
    {
        enthalpy = 2.779927;
    }
    if (temperature >= 40.52087 && temperature <= 50.76086)
    {
        enthalpy = 11.50112;
    }
    if (temperature >= 50.76086 && temperature <= 61.00085)
    {
        enthalpy = 20.28713;
    }
    if (temperature >= 61.00085 && temperature <= 71.24088)
    {
        enthalpy = 29.13465;
    }
    if (temperature >= 71.24088 && temperature <= 81.48087)
    {
        enthalpy = 38.04082;
    }
    if (temperature >= 81.48087 && temperature <= 91.72086)
    {
        enthalpy = 47.00316;
    }
    if (temperature >= 91.72086 && temperature <= 101.9608)
    {
        enthalpy = 56.01948;
    }
    if (temperature >= 101.9608 && temperature <= 112.2009)
    {
        enthalpy = 65.08791;
    }
    if (temperature >= 112.2009 && temperature <= 122.4409)
    {
        enthalpy = 74.20677;
    }
    if (temperature >= 122.4409 && temperature <= 132.6808)
    {
        enthalpy = 83.37462;
    }
    if (temperature >= 132.6808 && temperature <= 142.9209)
    {
        enthalpy = 92.5902;
    }
    if (temperature >= 142.9209 && temperature <= 153.1609)
    {
        enthalpy = 101.8524;
    }
    if (temperature >= 153.1609 && temperature <= 163.4008)
    {
        enthalpy = 111.1603;
    }
    if (temperature >= 163.4008 && temperature <= 173.6409)
    {
        enthalpy = 120.5129;
    }
    if (temperature >= 173.6409 && temperature <= 183.8809)
    {
        enthalpy = 129.9096;
    }
    if (temperature >= 183.8809 && temperature <= 194.1208)
    {
        enthalpy = 139.3498;
    }
    if (temperature >= 194.1208 && temperature <= 204.3609)
    {
        enthalpy = 148.8329;
    }
    if (temperature >= 204.3609 && temperature <= 214.6009)
    {
        enthalpy = 158.3584;
    }
    if (temperature >= 214.6009 && temperature <= 224.8409)
    {
        enthalpy = 167.9259;
    }
    if (temperature >= 224.8409 && temperature <= 235.0809)
    {
        enthalpy = 177.535;
    }
    if (temperature >= 235.0809 && temperature <= 245.3209)
    {
        enthalpy = 187.1856;
    }
    if (temperature >= 245.3209 && temperature <= 255.5609)
    {
        enthalpy = 196.8773;
    }
    if (temperature >= 255.5609 && temperature <= 265.8008)
    {
        enthalpy = 206.61;
    }
    if (temperature >= 265.8008 && temperature <= 276.0408)
    {
        enthalpy = 216.3835;
    }
    if (temperature >= 276.0408 && temperature <= 286.2809)
    {
        enthalpy = 226.1978;
    }
    if (temperature >= 286.2809 && temperature <= 296.5209)
    {
        enthalpy = 236.0526;
    }
    if (temperature >= 296.5209 && temperature <= 306.7609)
    {
        enthalpy = 245.9481;
    }
    if (temperature >= 306.7609 && temperature <= 317.0009)
    {
        enthalpy = 255.8841;
    }
    if (temperature >= 317.0009 && temperature <= 327.2408)
    {
        enthalpy = 265.8607;
    }
    if (temperature >= 327.2408 && temperature <= 337.4808)
    {
        enthalpy = 275.8779;
    }
    if (temperature >= 337.4808 && temperature <= 347.7209)
    {
        enthalpy = 285.9358;
    }
    if (temperature >= 347.7209 && temperature <= 357.9609)
    {
        enthalpy = 296.0344;
    }
    if (temperature >= 357.9609 && temperature <= 368.2009)
    {
        enthalpy = 306.1739;
    }
    if (temperature >= 368.2009 && temperature <= 378.4409)
    {
        enthalpy = 316.3542;
    }
    if (temperature >= 378.4409 && temperature <= 388.6808)
    {
        enthalpy = 326.5757;
    }
    if (temperature >= 388.6808 && temperature <= 398.9208)
    {
        enthalpy = 336.8384;
    }
    if (temperature >= 398.9208 && temperature <= 409.1609)
    {
        enthalpy = 347.1424;
    }
    if (temperature >= 409.1609 && temperature <= 419.3909)
    {
        enthalpy = 357.4879;
    }
    if (temperature >= 419.3909 && temperature <= 429.5609)
    {
        enthalpy = 367.862;
    }
    if (temperature >= 429.5609 && temperature <= 439.8008)
    {
        enthalpy = 381.4644;
    }
    if (temperature >= 439.8008 && temperature <= 450.0408)
    {
        enthalpy = 392.7681;
    }
    if (temperature >= 450.0408 && temperature <= 459.6309)
    {
        enthalpy = 404.3481;
    }
    if (temperature >= 459.6309 && temperature <= 469.8708)
    {
        enthalpy = 415.607;
    }
    if (temperature >= 469.8708 && temperature <= 480.1108)
    {
        enthalpy = 428.4218;
    }
    if (temperature >= 480.1108 && temperature <= 490.3508)
    {
        enthalpy = 442.9219;
    }
    if (temperature >= 490.3508 && temperature <= 499.9123)
    {
        enthalpy = 461.9581;
    }
    if (temperature >= 499.9123 && temperature <= 506.9109)
    {
        enthalpy = 488.547;
    }
    if (temperature >= 506.9109 && temperature <= 517.1409)
    {
        enthalpy = 500.5791;
    }
    if (temperature >= 517.1409 && temperature <= 524.8102)
    {
        enthalpy = 523.5127;
    }
    if (temperature >= 524.8102 && temperature <= 532.2509)
    {
        enthalpy = 553.0282;
    }
    if (temperature >= 532.2509 && temperature <= 540.5709)
    {
        enthalpy = 572.9718;
    }
    if (temperature >= 540.5709 && temperature <= 546.3309)
    {
        enthalpy = 602.3796;
    }
    if (temperature >= 546.3309 && temperature <= 550.1708)
    {
        enthalpy = 630.8785;
    }
    if (temperature >= 550.1708 && temperature <= 553.3708)
    {
        enthalpy = 656.5605;
    }
    if (temperature >= 553.3708 && temperature <= 555.9308)
    {
        enthalpy = 684.7234;
    }
    if (temperature >= 555.9308 && temperature <= 558.5809)
    {
        enthalpy = 714.1382;
    }
    if (temperature >= 558.5809 && temperature <= 559.8608)
    {
        enthalpy = 752.7663;
    }
    if (temperature >= 559.8608 && temperature <= 561.1409)
    {
        enthalpy = 775.3762;
    }
    if (temperature >= 561.1409 && temperature <= 562.4106)
    {
        enthalpy = 802.0961;
    }
    if (temperature >= 562.4106 && temperature <= 562.8809)
    {
        enthalpy = 833.8768;
    }
    if (temperature >= 562.8809 && temperature <= 565.8608)
    {
        enthalpy = 847.0292;
    }
    if (temperature >= 565.8608 && temperature <= 570.9808)
    {
        enthalpy = 875.7858;
    }
    if (temperature >= 570.9808 && temperature <= 576.1008)
    {
        enthalpy = 898.5082;
    }
    if (temperature >= 576.1008 && temperature <= 579.9409)
    {
        enthalpy = 923.6458;
    }
    if (temperature >= 579.9409 && temperature <= 583.7809)
    {
        enthalpy = 944.3896;
    }
    if (temperature >= 583.7809 && temperature <= 585.7509)
    {
        enthalpy = 967.0536;
    }
    if (temperature >= 585.7509 && temperature <= 595.9109)
    {
        enthalpy = 979.2011;
    }
    if (temperature >= 595.9109 && temperature <= 606.1509)
    {
        enthalpy = 992.3819;
    }
    if (temperature >= 606.1509 && temperature <= 616.3909)
    {
        enthalpy = 1006.195;
    }
    if (temperature >= 616.3909 && temperature <= 626.6309)
    {
        enthalpy = 1020.615;
    }
    if (temperature >= 626.6309 && temperature <= 636.8708)
    {
        enthalpy = 1035.727;
    }
    if (temperature >= 636.8708 && temperature <= 644.9709)
    {
        enthalpy = 1051.63;
    }
    if (temperature >= 644.9709 && temperature <= 655.2109)
    {
        enthalpy = 1063.92;
    }
    if (temperature >= 655.2109 && temperature <= 665.4509)
    {
        enthalpy = 1078.155;
    }
    if (temperature >= 665.4509 && temperature <= 675.6909)
    {
        enthalpy = 1093.094;
    }
    if (temperature >= 675.6909 && temperature <= 685.9141)
    {
        enthalpy = 1108.728;
    }
    if (temperature >= 685.9141 && temperature <= 693.7709)
    {
        enthalpy = 1125.07;
    }
    if (temperature >= 693.7709 && temperature <= 704.0109)
    {
        enthalpy = 1133.793;
    }
    if (temperature >= 704.0109 && temperature <= 714.2509)
    {
        enthalpy = 1145.178;
    }
    if (temperature >= 714.2509 && temperature <= 724.4908)
    {
        enthalpy = 1156.582;
    }
    if (temperature >= 724.4908 && temperature <= 734.7309)
    {
        enthalpy = 1168.006;
    }
    if (temperature >= 734.7309 && temperature <= 744.9709)
    {
        enthalpy = 1179.456;
    }
    if (temperature >= 744.9709 && temperature <= 755.2109)
    {
        enthalpy = 1190.933;
    }
    if (temperature >= 755.2109 && temperature <= 765.4509)
    {
        enthalpy = 1202.442;
    }
    if (temperature >= 765.4509 && temperature <= 775.6909)
    {
        enthalpy = 1213.987;
    }
    if (temperature >= 775.6909 && temperature <= 785.9309)
    {
        enthalpy = 1225.573;
    }
    if (temperature >= 785.9309 && temperature <= 796.1709)
    {
        enthalpy = 1237.206;
    }
    if (temperature >= 796.1709 && temperature <= 806.4109)
    {
        enthalpy = 1248.891;
    }
    if (temperature >= 806.4109 && temperature <= 816.6509)
    {
        enthalpy = 1260.636;
    }
    if (temperature >= 816.6509 && temperature <= 826.8909)
    {
        enthalpy = 1272.448;
    }
    if (temperature >= 826.8909 && temperature <= 834.6609)
    {
        enthalpy = 1284.336;
    }
    if (temperature >= 834.6609 && temperature <= 844.9009)
    {
        enthalpy = 1293.398;
    }
    if (temperature >= 844.9009 && temperature <= 855.1409)
    {
        enthalpy = 1305.373;
    }
    if (temperature >= 855.1409 && temperature <= 865.3809)
    {
        enthalpy = 1317.44;
    }
    if (temperature >= 865.3809 && temperature <= 875.6108)
    {
        enthalpy = 1329.606;
    }
    else
    {
        enthalpy = 0.0; // Return a default value for out-of-range temperatures
    }

    return enthalpy;
}
