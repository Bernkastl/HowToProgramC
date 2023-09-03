/*
 * 5.29 (Greatest Common Divisor) The greatest common divisor (GCD) of two integers
 * is the largest integer that evenly divides each of the two numbers. Write a function
 * gcd that returns the greatest common divisor of two integers.
 */

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    printf("gcd of 48 and 18 is: %d", gcd(18, 48));
}

int gcd(int num1, int num2)
{
    int a = num1;
    int b = num2;

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}
