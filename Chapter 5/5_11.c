/*
 * 5.11 (Rounding Numbers) Function floor may be used to round a number to a specific
 * decimal place. The statement
 * y = floor(x * 10 + .5) / 10;
 * rounds x to the tenths position (the first position to the right of the decimal point).
 * The statement
 * y = floor(x * 100 + .5) / 100;
 * rounds x to the hundredths position (the second position to the right of the decimal
 * point). Write a program that defines functions to round a number x in various ways:
 *      a) roundToInteger(number)
 *      b) roundToTenths(number)
 *      c) roundToHundreths(number)
 *      d) roundToThousandths(number)
 * For each value the program inputs, display the original value, the number rounded to
 * the nearest integer, the number rounded to the nearest tenth, the number rounded to
 * the nearest hundredth, and the number rounded to the nearest thousandth.
 */

#include <stdio.h>
#include <math.h>

double roundToInteger(double);
double roundToTenths(double);
double roundToHundreths(double);
double roundToThousandths(double);

int main(void)
{

    for (int i = 0; i < 5; i++)
    {
        double number;
        printf("Enter a number: ");
        scanf("%lf", &number);

        printf("\nOriginal value: %lf\n", number);
        printf("Rounded to the nearest integer: %lf\n", roundToInteger(number));
        printf("Rounded to the nearest tenth: %lf\n", roundToTenths(number));
        printf("Rounded to the nearest hundredth: %lf\n", roundToHundreths(number));
        printf("Rounded to the nearest thousandth: %lf\n", roundToThousandths(number));
    }
    
}

double roundToInteger(double number)
{
    return floor(number + 0.5);
}

double roundToTenths(double number)
{
    return floor(number * 10 + 0.5) / 10.0;
}

double roundToHundreths(double number)
{
    return floor(number * 100 + 0.5) / 100.0;
}

double roundToThousandths(double number)
{
    return floor(number * 1000 + 0.5) / 1000.0;
}
