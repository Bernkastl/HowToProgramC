/*
 * 3.41 (Diameter, Circumference and Area of a Circle) Write a program that reads the
 * radius of a circle (as a double value) and computes and prints the diameter, the circumference
 * and the area. Use the value 3.14159 for π.
 */

#include <stdio.h>

int main(void)
{
    const double pi = 3.14159;
    double radius;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    double diameter = 2 * radius;
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;

    printf("Diameter: %.2lf\n", diameter);
    printf("Circumference: %.2lf\n", circumference);
    printf("Area: %.2lf\n", area);

    return 0;
}
