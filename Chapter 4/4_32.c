/*
 * 4.32 (Modified Diamond-Printing Program) Modify the program you wrote in Exercise
 * 4.31 to read an odd number in the range 1 to 19 to specify the number of rows
 * in the diamond. Your program should then display a diamond of the appropriate size.
 */

#include <stdio.h>

int main(void)
{
    int size;

    printf("Enter the number of rows: ");
    scanf("%d", &size);

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

    for (int i = (size / 2); i >= 1; i--)
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

    return 0;
}
