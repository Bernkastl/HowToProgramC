/*
 * 5.24 (Temperature Conversions) Implement the following integer functions:
 * a) toCelsius returns the Celsius equivalent of a Fahrenheit temperature.
 * b) toFahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
 * Use these functions to write a program that prints charts showing the Fahrenheit
 * equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents
 * of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a tabular
 * format that minimizes the number of lines of output while remaining readable.
 */

#include <stdio.h>
#include <math.h>

int toCelsius(int);
int toFahrenheit(int);

int main(void)
{
    printf("Celsius\tFahrenheit\n");

    for (int i = 0; i <= 100; i++)
    {
        printf("%d\t%d\n", i, toFahrenheit(i));
    }

    printf("\n");

    printf("Fahrenheit\tCelsius\n");

    for (int i = 32; i <= 212; i++)
    {
        printf("%d\t%d\n", i, toCelsius(i));
    }
}

int toCelsius(int fahrenheit)
{
    return (int) (5.0 / 9.0 * (fahrenheit - 32));
}

int toFahrenheit(int celsius)
{
    return (int) (9.0 / 5.0 * celsius + 32);
}
