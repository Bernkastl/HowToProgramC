/*
 * 3.38 (Counting 7s) Write a program that reads an integer (5 digits or fewer) and determines
 * and prints how many digits in the integer are 7s.
 */

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int numberOfSevens = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 7)
        {
            numberOfSevens++;
        }
        num /= 10;
    }

    printf("Number of 7's: %d", numberOfSevens);
    return 0;
}
