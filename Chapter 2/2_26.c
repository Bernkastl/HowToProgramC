/*
 * 2.26 (Separating Digits in an Integer) Write a program that inputs one five-digit
 * number, separates the number into its individual digits and displays the digits separated
 * from one another by three spaces each. [Hint: Use combinations of integer division
 * and the remainder operation.] For example, if the user types in 42139, the
 * program should display
 * 4   2   1   3   9
 */

#include <stdio.h>

int main(void)
{
    printf("Enter a 5 digit integer: ");

    int d1, d2, d3, d4, d5;
    scanf("%1d%1d%1d%1d%1d", &d5, &d4, &d3, &d2, &d1);

    printf("%d   %d   %d   %d   %d", d5, d4, d3, d2, d1);

    return 0;
}
