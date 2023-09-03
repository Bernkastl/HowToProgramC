/*
 * 5.25 (Find the Minimum) Write a function that returns the smallest of three floating-
 * point numbers.
 */

#include <stdio.h>

float findSmallest(float, float, float);

int main(void)
{
    float num1, num2, num3;

    printf("Enter 3 floating point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("The smallest number is: %f", findSmallest(num1, num2, num3));
}

float findSmallest(float n1, float n2, float n3)
{
    float min = n1;

    if (n2 < min)
    {
        min = n2;
    }
    if (n3 < min)
    {
        min = n3;
    }

    return min;
}
