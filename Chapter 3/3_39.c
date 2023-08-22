/*
 * 3.39 (Checkerboard Pattern of Asterisks) Write a program that displays the following
 * checkerboard pattern:
 *
 *  * * * * * * * *
 *   * * * * * * * *
 *  * * * * * * * *
 *   * * * * * * * *
 *  * * * * * * * *
 *   * * * * * * * *
 *  * * * * * * * *
 *   * * * * * * * *
 */

#include <stdio.h>

int main(void)
{
    int row = 1, col = 1;

    while (col <= 8)
    {
        while (row <= 16)
        {
            if (col % 2 == 0)
            {
                if (row % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (row % 2 == 0)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            row++;
        }
        row = 1;
        puts("");
        col++;
    }

    return 0;
}
