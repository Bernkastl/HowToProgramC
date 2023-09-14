/*
 * 6.15 (Duplicate Elimination) Use a one-dimensional array to solve the following
 * problem. Read 20 numbers, each of which is between 10 and 100, inclusive. As each
 * number is read, print it only if it’s not a duplicate of a number already read. Provide
 * for the “worst case” in which all 20 numbers are different. Use the smallest possible
 * array to solve this problem.
 */

#include <stdio.h>

#define SIZE 20
#define FREQ 90

int main(void)
{
    int numbers[SIZE];
    int frequency[FREQ] = {0};

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("Enter a number between 10 and 100: ");
        scanf("%d", &numbers[i]);

        if(frequency[numbers[i]] == 0)
        {
            frequency[numbers[i]]++;
            printf("%d\n", numbers[i]);
        }
    }
}
