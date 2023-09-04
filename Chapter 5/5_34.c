/*
 * 5.34 (Recursive Exponentiation) Write a recursive function power(base, exponent)
 * that when invoked returns
 * base ^ exponent
 * For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater
 * than or equal to 1. Hint: The recursion step would use the relationship
 * base ^ exponent = base * base ^ exponent–1
 * and the terminating condition occurs when exponent is equal to 1 because
 * base ^ 1 = base
 */

#include <stdio.h>

long long power(int, int);

int main(void)
{
    int base, exponent;

    printf("Enter a base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d raised to the power %d is %lld", base, exponent, power(base, exponent));
}

long long power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}
