/*
 * 3.33 (Hollow Square of Asterisks) Modify the program you wrote in the preceding
 * exercise so that it prints a hollow square. For example, if your program reads a size of
 * 5, it should print
 *
 * ****
 * *  *
 * *  *
 * ****
 */

#include <stdio.h>

int main(void)
{
    int side;
    printf("Enter the length of the side: ");
    scanf("%d", &side);

    int row = 1, col = 1;

    while (col <= side)
    {
        while (row <= side)
        {
            if (col == 1 || col == side)
            {
                printf("*");
            }
            else if (row == 1 || row == side)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            row++;
        }
        puts("");
        row = 1;
        col++;
    }

    return 0;
}
