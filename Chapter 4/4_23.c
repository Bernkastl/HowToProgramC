/*
 * 4.23 (Calculating the Compound Interest with Integers) Modify the program of
 * Fig. 4.4 so that it uses only integers to calculate the compound interest. [Hint: Treat
 * all monetary amounts as integral numbers of pennies. Then “break” the result into its
 * dollar portion and cents portion by using the division and remainder operations, respectively.
 * Insert a period.]
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int principal = 100000;
    double rate = 0.05;

    printf("%s%21s\n", "Year", "Amount on deposit");

    for (int year = 1; year <= 10; year++)
    {
        int amount = principal * pow(1.0 + rate, year);
        int cents = amount % 100;
        int dollars = amount / 100;

        printf("%4d%18d.", year, dollars);

        if (cents < 10)
        {
            printf("0%d\n", cents);
        }
        else
        {
            printf("%d\n", cents);
        }
    }

    return 0;
}
