#include <stdio.h>

int main(void)
{
    int radius = 2;
    float pi = 3.14159;

    printf("A circle of radius %f\n", radius);
    printf("Diameter is %f\n", 2.0 * radius);
    printf("Circumference is %f\n", 2.0 * pi * radius);
    printf("Area is %f\n", pi * radius * radius);

    return 0;
}