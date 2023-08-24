/*
 * 4.10 (Average a Sequence of Integers) Write a program that calculates and prints the
 * average of several integers. Assume the last value read with scanf is the sentinel 9999.
 * A typical input sequence might be
 *      10 8 11 7 9 9999
 * indicating that the average of all the values preceding 9999 is to be calculated.
 */

#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0, count = 0;

    printf("Enter digits to calculate their average (9999 to stop): ");
    scanf("%d", &number);

    while (number != 9999)
    {
        sum += number;
        count++;

        scanf("%d", &number);
    };

    printf("The average is: %.2f", (float) sum / count);

    return 0;
}
