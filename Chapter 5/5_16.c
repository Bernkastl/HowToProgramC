/*
 * 5.16 (Exponentiation) Write a function integerPower(base, exponent) that returns
 * the value of base ^ exponent
 * For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a positive,
 * nonzero integer, and base is an integer. Function integerPower should use a for
 * statement to control the calculation. Do not use any math library functions.
 */

#include <stdio.h>

int integerPower(int, int);

int main(void)
{
    printf("5^2 is %d", integerPower(5,2));
}


int integerPower(int base, int exponent)
{
    int product = 1;

    for (int i = 1; i <= exponent; i++)
    {
        product *= base;
    }
    return product;
}
