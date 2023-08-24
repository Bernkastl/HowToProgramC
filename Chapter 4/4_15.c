/*
 * 4.15 (Modified Compound-Interest Program) Modify the compound-interest program
 * of Section 4.5 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and
 * 10%. Use a for loop to vary the interest rate.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0;

    for (int i = 5; i <= 10; i++)
    {
        printf("Interest Rate %d%%: \n", i);
        for (int year = 1; year <= 10; ++year)
        {
            printf("%4s%21s\n", "Year", "Amount on deposit");
            double amount = principal * pow(1.0 + i / 100.0, year);
            printf("%4d%21.2f\n", year, amount);
        }
        puts("");
    }

    return 0;
}
