/*
 * 4.9 (Sum a Sequence of Integers) Write a program that sums a sequence of integers.
 * Assume that the first integer read with scanf specifies the number of values remaining
 * to be entered. Your program should read only one value each time scanf executes. A
 * typical input sequence might be
 *      5 100 200 300 400 500
 * where the 5 indicates that the next five values are to be summed.
 */

#include <stdio.h>

int main(void)
{
    int count;
    printf("Enter the number of inputs followed by the inputs to be summed: ");
    scanf("%d", &count);

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }

    printf("The sum is: %d", sum);
    
    return 0;
}
