/*
 * 5.21 (Project: Drawing Shapes with Characters) Use techniques similar to those developed
 * in Exercises 5.19 and 5.20 to produce a program that graphs a wide range of
 * shapes.
 */

#include <stdio.h>

void printSquare(int, char);
void printTriangle(int, char);

int main(void)
{
    int sides = 8;
    char fill = '#';

    printSquare(sides, fill);
    printf("\n\n");
    printTriangle(sides, fill);
}

void printSquare(int side, char fillCharacter)
{
    for (int i = 1; i <= side; i++)
    {
        for (int i = 1; i <= side; i++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}

void printTriangle(int length, char fillCharacter)
{
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
