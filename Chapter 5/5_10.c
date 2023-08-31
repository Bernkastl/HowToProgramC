/*
 * 5.10 (Rounding Numbers) An application of function floor is rounding a value to
 * the nearest integer. The statement
 * y = floor(x + .5);
 * rounds x to the nearest integer and assigns the result to y. Write a program that reads
 * several numbers and rounds each of these numbers to the nearest integer. For each
 * number processed, print both the original number and the rounded number.
 */

#include <stdio.h>
#include <math.h>

double roundNumber(double);

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        double value;
        printf("Enter a floating point value: ");
        scanf("%lf", &value);

        printf("%lf rounded is %.1lf\n", value, roundNumber(value));
    }
}

double roundNumber(double number)
{
    return floor(number + 0.5);
}
