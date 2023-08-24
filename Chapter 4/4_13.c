/*
 * 4.13 (Calculating the Product of Odd Integers) Write a program that calculates and
 * prints the product of the odd integers from 1 to 15.
 */

#include <stdio.h>

int main(void)
{
    int product = 1;
    for (int i = 1; i <= 15; i += 2)
    {
        product *= i;
    }
    
    printf("The product of the odd integers from 1 to 15 is %d", product);

    return 0;
}
