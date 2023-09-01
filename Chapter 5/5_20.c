/*
 * 5.20 (Displaying a Square of Any Character) Modify the function in Exercise 5.19 to
 * form the square out of whatever character is contained in char parameter fillCharacter.
 * Thus if side is 5 and fillCharacter is “#”, then this function should print:
 * 
 *  #####
 *  #####
 *  #####
 *  #####
 *  #####
 */

#include <stdio.h>

void printSquare(int, char);

int main(void)
{
    int sides = 4;
    char fill = '#';

    printSquare(sides, fill);
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
