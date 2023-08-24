/*
 * 4.16 (Triangle-Printing Program) Write a program that prints the following patterns
 * separately, one below the other. Use for loops to generate the patterns. All asterisks
 * (*) should be printed by a single printf statement of the form printf("%s",
 * "*"); (this causes the asterisks to print side-by-side). [Hint: The last two patterns require
 * that each line begin with an appropriate number of blanks.]
 *
 *      (A)    (C)      (B)    (D)
 *      * ********** ********** *
 *      ** ********* ********* **
 *      *** ******** ******** ***
 *      **** ******* ******* ****
 *      ***** ****** ****** *****
 *      ****** ***** ***** ******
 *      ******* **** **** *******
 *      ******** *** *** ********
 *      ********* ** ** *********
 *      ********** * * **********
 */

#include <stdio.h>

int main(void)
{
    int cols = 10;
    int rows = 10;

    // Triangle A
    for (int i = 1; i <= cols; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        puts("");
    }

    puts("");

    // Triangle B
    for (int i = 1; i <= cols; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("*");
        }
        puts("");
    }

    puts("");

    // Triangle C
    for (int i = 1; i <= cols; i++)
    {
        for (int s = 1; s < i; s++)
        {
            printf(" ");
        }

        for (int j = rows; j >= i; j--)
        {
            printf("*");
        }
        puts("");
    }

    puts("");

    // Triangle D
    for (int i = 1; i <= cols; i++)
    {
        for (int s = 9; s >= i; s--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        puts("");
    }

    return 0;
}
