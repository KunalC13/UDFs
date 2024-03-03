#include "udf.h"

DEFINE_PROPERTY(density, c, t)
{
    real temperature = C_T(c, t);
    real density;


    if (temperature >= 35.40085 && temperature <= 45.64087)
    {
        density = 2819.886;
    }
    if (temperature >= 45.64087 && temperature <= 55.88086)
    {
        density = 2818.046;
    }
    if (temperature >= 55.88086 && temperature <= 66.12085)
    {
        density = 2816.19;
    }
    if (temperature >= 66.12085 && temperature <= 76.36087)
    {
        density = 2814.318;
    }
    if (temperature >= 76.36087 && temperature <= 86.60086)
    {
        density = 2812.431;
    }
    if (temperature >= 86.60086 && temperature <= 96.84085)
    {
        density = 2810.528;
    }
    if (temperature >= 96.84085 && temperature <= 107.0809)
    {
        density = 2808.609;
    }
    if (temperature >= 107.0809 && temperature <= 117.3209)
    {
        density = 2806.674;
    }
    if (temperature >= 117.3209 && temperature <= 127.5609)
    {
        density = 2804.724;
    }
    if (temperature >= 127.5609 && temperature <= 137.8009)
    {
        density = 2802.759;
    }
    if (temperature >= 137.8009 && temperature <= 148.0409)
    {
        density = 2800.778;
    }
    if (temperature >= 148.0409 && temperature <= 158.2809)
    {
        density = 2798.782;
    }
    if (temperature >= 158.2809 && temperature <= 168.5209)
    {
        density = 2796.77;
    }
    if (temperature >= 168.5209 && temperature <= 178.7609)
    {
        density = 2794.743;
    }
    if (temperature >= 178.7609 && temperature <= 189.0009)
    {
        density = 2792.701;
    }
    if (temperature >= 189.0009 && temperature <= 199.2409)
    {
        density = 2790.644;
    }
    if (temperature >= 199.2409 && temperature <= 209.4809)
    {
        density = 2788.572;
    }
    if (temperature >= 209.4809 && temperature <= 219.7209)
    {
        density = 2786.484;
    }
    if (temperature >= 219.7209 && temperature <= 229.9608)
    {
        density = 2784.382;
    }
    if (temperature >= 229.9608 && temperature <= 240.2009)
    {
        density = 2782.264;
    }
    if (temperature >= 240.2009 && temperature <= 250.4409)
    {
        density = 2780.132;
    }
    if (temperature >= 250.4409 && temperature <= 260.6808)
    {
        density = 2777.984;
    }
    if (temperature >= 260.6808 && temperature <= 270.9208)
    {
        density = 2775.822;
    }
    if (temperature >= 270.9208 && temperature <= 281.1609)
    {
        density = 2773.645;
    }
    if (temperature >= 281.1609 && temperature <= 291.4009)
    {
        density = 2771.454;
    }
    if (temperature >= 291.4009 && temperature <= 301.6409)
    {
        density = 2769.247;
    }
    if (temperature >= 301.6409 && temperature <= 311.8809)
    {
        density = 2767.026;
    }
    if (temperature >= 311.8809 && temperature <= 322.1208)
    {
        density = 2764.791;
    }
    if (temperature >= 322.1208 && temperature <= 332.3608)
    {
        density = 2762.541;
    }
    if (temperature >= 332.3608 && temperature <= 342.6008)
    {
        density = 2760.276;
    }
    if (temperature >= 342.6008 && temperature <= 352.8409)
    {
        density = 2757.998;
    }
    if (temperature >= 352.8409 && temperature <= 363.0809)
    {
        density = 2755.704;
    }
    if (temperature >= 363.0809 && temperature <= 373.3209)
    {
        density = 2753.397;
    }
    if (temperature >= 373.3209 && temperature <= 383.5609)
    {
        density = 2751.075;
    }
    if (temperature >= 383.5609 && temperature <= 393.8008)
    {
        density = 2748.74;
    }
    if (temperature >= 393.8008 && temperature <= 404.0408)
    {
        density = 2746.389;
    }
    if (temperature >= 404.0408 && temperature <= 414.2809)
    {
        density = 2744.025;
    }
    if (temperature >= 414.2809 && temperature <= 424.5209)
    {
        density = 2741.648;
    }
    if (temperature >= 424.5209 && temperature <= 434.6808)
    {
        density = 2732.397;
    }
    if (temperature >= 434.6808 && temperature <= 444.9208)
    {
        density = 2742.938;
    }
    if (temperature >= 444.9208 && temperature <= 454.5209)
    {
        density = 2739.687;
    }
    if (temperature >= 454.5209 && temperature <= 464.7509)
    {
        density = 2736.517;
    }
    if (temperature >= 464.7509 && temperature <= 474.9908)
    {
        density = 2732.868;
    }
    if (temperature >= 474.9908 && temperature <= 485.2308)
    {
        density = 2728.652;
    }
    if (temperature >= 485.2308 && temperature <= 495.4547)
    {
        density = 2723.104;
    }
    if (temperature >= 495.4547 && temperature <= 501.7908)
    {
        density = 2713.125;
    }
    if (temperature >= 501.7908 && temperature <= 512.0309)
    {
        density = 2707.073;
    }
    if (temperature >= 512.0309 && temperature <= 521.6208)
    {
        density = 2701.033;
    }
    if (temperature >= 521.6208 && temperature <= 527.1309)
    {
        density = 2692.511;
    }
    if (temperature >= 527.1309 && temperature <= 536.7308)
    {
        density = 2686.424;
    }
    if (temperature >= 536.7308 && temperature <= 543.7709)
    {
        density = 2679.229;
    }
    if (temperature >= 543.7709 && temperature <= 548.2509)
    {
        density = 2672.286;
    }
    if (temperature >= 548.2509 && temperature <= 552.0909)
    {
        density = 2666.513;
    }
    if (temperature >= 552.0909 && temperature <= 554.6509)
    {
        density = 2660.122;
    }
    if (temperature >= 554.6509 && temperature <= 557.2009)
    {
        density = 2654.694;
    }
    if (temperature >= 557.2009 && temperature <= 558.5809)
    {
        density = 2647.858;
    }
    if (temperature >= 558.5809 && temperature <= 559.8608)
    {
        density = 2643.699;
    }
    if (temperature >= 559.8608 && temperature <= 561.1409)
    {
        density = 2639.232;
    }
    if (temperature >= 561.1409 && temperature <= 562.4106)
    {
        density = 2634.012;
    }
    if (temperature >= 562.4106 && temperature <= 562.8809)
    {
        density = 2627.873;
    }
    if (temperature >= 562.8809 && temperature <= 565.8608)
    {
        density = 2625.346;
    }
    if (temperature >= 565.8608 && temperature <= 570.9808)
    {
        density = 2618.047;
    }
    if (temperature >= 570.9808 && temperature <= 576.1008)
    {
        density = 2609.474;
    }
    if (temperature >= 576.1008 && temperature <= 579.9409)
    {
        density = 2599.928;
    }
    if (temperature >= 579.9409 && temperature <= 583.7809)
    {
        density = 2592.008;
    }
    if (temperature >= 583.7809 && temperature <= 585.7509)
    {
        density = 2583.316;
    }
    if (temperature >= 585.7509 && temperature <= 595.9109)
    {
        density = 2578.649;
    }
    if (temperature >= 595.9109 && temperature <= 606.1509)
    {
        density = 2574.878;
    }
    if (temperature >= 606.1509 && temperature <= 616.3909)
    {
        density = 2570.9;
    }
    if (temperature >= 616.3909 && temperature <= 626.6309)
    {
        density = 2566.718;
    }
    if (temperature >= 626.6309 && temperature <= 636.8708)
    {
        density = 2562.302;
    }
    if (temperature >= 636.8708 && temperature <= 644.9709)
    {
        density = 2557.623;
    }
    if (temperature >= 644.9709 && temperature <= 655.2109)
    {
        density = 2553.779;
    }
    if (temperature >= 655.2109 && temperature <= 665.4509)
    {
        density = 2548.714;
    }
    if (temperature >= 665.4509 && temperature <= 675.6909)
    {
        density = 2543.213;
    }
    if (temperature >= 675.6909 && temperature <= 685.9141)
    {
        density = 2537.258;
    }
    if (temperature >= 685.9141 && temperature <= 693.7709)
    {
        density = 2530.831;
    }
    if (temperature >= 693.7709 && temperature <= 704.0109)
    {
        density = 2528.514;
    }
    if (temperature >= 704.0109 && temperature <= 714.2509)
    {
        density = 2525.496;
    }
    if (temperature >= 714.2509 && temperature <= 724.4908)
    {
        density = 2522.481;
    }
    if (temperature >= 724.4908 && temperature <= 734.7309)
    {
        density = 2519.468;
    }
    if (temperature >= 734.7309 && temperature <= 744.9709)
    {
        density = 2516.458;
    }
    if (temperature >= 744.9709 && temperature <= 755.2109)
    {
        density = 2513.452;
    }
    if (temperature >= 755.2109 && temperature <= 765.4509)
    {
        density = 2510.451;
    }
    if (temperature >= 765.4509 && temperature <= 775.6909)
    {
        density = 2507.454;
    }
    if (temperature >= 775.6909 && temperature <= 785.9309)
    {
        density = 2504.462;
    }
    if (temperature >= 785.9309 && temperature <= 796.1709)
    {
        density = 2501.476;
    }
    if (temperature >= 796.1709 && temperature <= 806.4109)
    {
        density = 2498.496;
    }
    if (temperature >= 806.4109 && temperature <= 816.6509)
    {
        density = 2495.524;
    }
    if (temperature >= 816.6509 && temperature <= 826.8909)
    {
        density = 2492.561;
    }
    if (temperature >= 826.8909 && temperature <= 834.6609)
    {
        density = 2489.606;
    }
    if (temperature >= 834.6609 && temperature <= 844.9009)
    {
        density = 2487.373;
    }
    if (temperature >= 844.9009 && temperature <= 855.1409)
    {
        density = 2484.443;
    }
    if (temperature >= 855.1409 && temperature <= 865.3809)
    {
        density = 2481.526;
    }
    if (temperature >= 865.3809 && temperature <= 875.6108)
    {
        density = 2478.622;
    }
    else
    {
        density = 2478.622; // Return a default value for out-of-range temperatures
    }

    return density;
}
