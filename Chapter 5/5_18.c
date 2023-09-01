/*
 * 5.18 (Even or Odd) Write a program that inputs a series of integers and passes them
 * one at a time to function isEven, which uses the remainder operator to determine
 * whether an integer is even. The function should take an integer argument and return
 * 1 if the integer is even and 0 otherwise.
 */

#include <stdio.h>

int isEven(int);

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);

        if (isEven(number))
        {
            printf("%d is even\n", number);
        }
        else
        {
            printf("%d is odd\n", number);
        }
    }
    
}

int isEven(int number)
{
    return number % 2 == 0 ? 1 : 0; 
}
