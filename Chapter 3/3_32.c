/*
 * 3.32 (Square of Asterisks) Write a program that reads in the side of a square and then
 * prints that square out of asterisks. Your program should work for squares of all side
 * sizes between 1 and 20. For example, if your program reads a size of 4, it should print
 *
 * ****
 * ****
 * ****
 * ****
 */

#include <stdio.h>

int main(void)
{
    int side;
    printf("Enter the length of the side: ");
    scanf("%d", &side);

    int row = 0, col = 0;

    while (col < side)
    {
        while (row < side)
        {
            printf("*");
            row++;
        }
        puts("");
        row = 0;
        col++;
    }

    return 0;
}
