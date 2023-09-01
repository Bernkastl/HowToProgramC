/*
 * 5.19 (Square of Asterisks) Write a function that displays a solid square of asterisks
 * whose side is specified in integer parameter side. For example, if side is 4, the function
 * displays:
 * 
 * ****
 * ****
 * ****
 * ****
 */

#include <stdio.h>

void printSquare(int);

int main(void)
{
    int sides = 4;
    
    printSquare(sides);
}

void printSquare(int side)
{
    for (int i = 1; i <= side; i++)
    {
        for (int i = 1; i <= side; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}
