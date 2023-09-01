/*
 * 5.17 (Multiples) Write a function isMultiple that determines for a pair of integers
 * whether the second integer is a multiple of the first. The function should take two integer
 * arguments and return 1 (true) if the second is a multiple of the first, and 0 (false)
 * otherwise. Use this function in a program that inputs a series of pairs of integers.
 */

#include <stdio.h>

int isMultiple(int, int);

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        int num1, num2;

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        if (isMultiple(num1, num2))
        {
            printf("%d is a multiple of %d\n", num1, num2);
        }
        else
        {
            printf("%d is NOT a multiple of %d\n", num1, num2);
        }
    }
}

int isMultiple(int first, int second)
{
    if(second % first == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
