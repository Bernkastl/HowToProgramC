/*
 * 2.16 (Arithmetic) Write a program that reads two integers from the user then displays
 * their sum, product, difference, quotient and remainder.
 */

#include <stdio.h>

int main(void)
{
    printf("Enter two integers: ");

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Product: %d\n", num1 * num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Quotient: %d\n", num1 / num2);
    printf("Remainder: %d\n", num1 % num2);

    return 0;
}
