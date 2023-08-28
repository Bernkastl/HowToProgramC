/*
 * 4.31 (Diamond-Printing Program) Write a program that prints the following diamond
 * shape. Your printf statements may print either one asterisk (*) or one blank.
 * Use nested for statements and minimize the number of printf statements
 *
 *        *
 *       ***
 *      *****
 *     *******
 *    *********
 *     *******
 *      *****
 *       ***
 *        *
 */

#include <stdio.h>

int main(void)
{
    int size = 9;

    for (int i = 1; i <= (size / 2) + 1; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        puts("");
    }

    for (int i = (size / 2) ; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        puts("");
    }
}
