/*
 * 5.22 (Separating Digits) Write program segments to accomplish each of the following:
 *  a) Calculate the int part of the quotient when int a is divided by int b.
 *  b) Calculate the int remainder when int a is divided by int b.
 *  c) Use the program pieces developed in a) and b) to write a function that inputs
 * an integer between 1 and 32767 and prints it as a series of digits, with
 * two spaces between each digit. For example, 4562 should be printed as: 4  5  6  2
 */

#include <stdio.h>

int quotient(int, int);
int rem(int, int);

int main(void)
{
    int number;
    int max_digits = 10000;

    printf("Enter an integer between 1 and 32767: ");
    scanf("%d", &number);

    while (number >= 0)
    {
        if (number >= max_digits)
        {
            printf("%d  ", quotient(number, max_digits));

            number = rem(number, max_digits);
        }
        else
        {
            max_digits /= 10;
        }
    }
    
}

int quotient(int a, int b)
{
    return a / b;
}

int rem(int a, int b)
{
    return a % b;
}
