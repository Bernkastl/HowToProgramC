/*
 * 5.45 (Testing Math Library Functions) Write a program that tests the math library
 * functions shown in Section 5.3’s table. Exercise each of these functions by having
 * your program print out tables of return values for a diversity of argument values.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("x\t\t| sqrt(x)\t| cbrt(x)\t| exp(x)\t| log(x)\t| log10(x)\n");
    printf("--------------------------------------------------------------\n");

    for (double x = 0.1; x <= 2.0; x += 0.1)
    {
        printf("%.2f\t| %.6f\t| %.6f\t| %.6f\t| %.6f\t| %.6f\n",
               x, sqrt(x), cbrt(x), exp(x), log(x), log10(x));
    }

    printf("x\t\t| fabs(x)\t| ceil(x)\t| floor(x)\t| pow(x, 2.0)\t| fmod(x, 2.0)\n");
    printf("------------------------------------------------------------------\n");

    for (double x = 0.1; x <= 2.0; x += 0.1)
    {
        double y = 2.0; // For pow(x, y)
        printf("%.2f\t| %.6f\t| %.6f\t| %.6f\t| %.6f\t| %.6f\n",
               x, fabs(x), ceil(x), floor(x), pow(x, y), fmod(x, y));
    }

    return 0;
}
