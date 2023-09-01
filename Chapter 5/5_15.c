/*
 * 5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates
 * a right triangle’s hypotenuse, based on the values of the other two sides. The function
 * should take two double arguments and return the hypotenuse as a double. Test your
 * program with the side values specified in the following table:
 * 
 *  Side1  Side2
 *  3.0    4.0
 *  5.0    12.0
 *  8.0    15.0
 */

#include <stdio.h>
#include <math.h>

double hypotenuse(double, double);

int main(void)
{
    printf("Side1\tSide2\tHypotenuse\n");

    printf("%.2lf\t%.2lf\t%.2lf\n", 3.0, 4.0, hypotenuse(3, 4));
    printf("%.2lf\t%.2lf\t%.2lf\n", 5.0, 12.0, hypotenuse(5, 12));
    printf("%.2lf\t%.2lf\t%.2lf\n", 8.0, 15.0, hypotenuse(8, 15));
    
}


double hypotenuse(double side1, double side2)
{
    return sqrt(pow(side1, 2) + pow(side2, 2));
}
