/*
 * 2.23 (Multiples) Write a program that reads two integers and determines and displays
 * whether the first is a multiple of the second. Use the remainder operator.
 */

#include <stdio.h>

int main(void)
{
    printf("Enter two integer: ");

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0)
    {
        printf("%d is a multiple of %d", num1, num2);
    }
    if (num1 % num2 != 0)
    {
        printf("%d is not a multiple of %d", num1, num2);
    }

    return 0;
}
