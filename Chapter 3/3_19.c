/*
 * 3.19 (Interest Calculator) The simple interest on a loan is calculated by the formula
 * interest = principal * rate * days / 365;
 * The preceding formula assumes that rate is the annual interest rate, so it divides by
 * 365 (days per year). Develop a program that uses scanf to input principal, rate
 * and days for several loans, and will calculate and display the simple interest for each
 * loan, using the preceding formula. Here is a sample input/output dialog:
 * 
 *      Enter loan principal (-1 to end): 1000.00
 *      Enter interest rate: .1
 *      Enter term of the loan in days: 365
 *      The interest charge is $100.00
 *      Enter loan principal (-1 to end): 1000.00
 *      Enter interest rate: .08375
 *      Enter term of the loan in days: 224
 *      The interest charge is $51.40
 *      Enter loan principal (-1 to end): -1
 */

#include <stdio.h>

int main(void)
{
    float principal;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    float rate, interest;
    int days;
    while (principal != -1)
    {
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365;

        printf("The interest charge is $%.2f\n", interest);

        printf("\n%s", "Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }
    
    return 0;
}
