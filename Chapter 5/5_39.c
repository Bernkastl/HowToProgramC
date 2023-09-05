/*
 * 5.39 (Recursive Greatest Common Divisor) The greatest common divisor of integers
 * x and y is the largest integer that evenly divides both x and y. Write a recursive function
 * gcd that returns the greatest common divisor of x and y. The greatest common
 * divisor of x and y is defined recursively as follows: If y is equal to 0, then gcd(x, y) is
 * x; otherwise gcd(x, y) is gcd(y, x % y), where % is the remainder operator.
 */

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int x, y;
    printf("Enter 2 integers: ");
    scanf("%d %d", &x, &y);

    printf("The greatest common divisor of %d and %d is %d", x, y, gcd(x, y));
}

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
