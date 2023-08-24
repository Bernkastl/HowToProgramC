/*
 * 4.11 (Find the Smallest) Write a program that finds the smallest of several integers.
 * Assume that the first value read specifies the number of values remaining.
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int count;
    printf("Enter the number of inputs followed by the input numbers: ");
    scanf("%d", &count);

    int number, smallest = INT_MAX;
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &number);
        if (number < smallest)
        {
            smallest = number;
        }
    }

    printf("The smallest number is: %d", smallest);
    
    return 0;
}
