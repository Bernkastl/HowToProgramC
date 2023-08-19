/*
 * 2.22 (Odd or Even) Write a program that reads an integer and determines and displays
 * whether it’s odd or even. Use the remainder operator. An even number is a multiple
 * of two. Any multiple of two leaves a remainder of zero when divided by 2.
 */

#include <stdio.h>

int main(void)
{
    printf("Enter an integer: ");

    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%s", "The integer is even");
    }
    if (num % 2 != 0)
    {
        printf("%s", "The integer is odd");
    }

    return 0;
}
