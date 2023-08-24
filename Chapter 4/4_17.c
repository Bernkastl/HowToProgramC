/*
 * 4.17 (Calculating Credit Limits) Collecting money becomes increasingly difficult
 * during periods of recession, so companies may tighten their credit limits to prevent
 * their accounts receivable (money owed to them) from becoming too large. In response
 * to a prolonged recession, one company has cut its customers’ credit limits in
 * half. Thus, if a particular customer had a credit limit of $2000, it’s now $1000. If a
 * customer had a credit limit of $5000, it’s now $2500. Write a program that analyzes
 * the credit status of three customers of this company. For each customer you’re given:
 *      a) The customer’s account number.
 *      b) The customer’s credit limit before the recession.
 *      c) The customer’s current balance (i.e., the amount the customer owes).
 * Your program should calculate and print the new credit limit for each customer
 * and determine (and print) which customers have balances that exceed their new
 * credit limits.
 */

#include <stdio.h>

int main(void)
{
    int accountNumber;
    float creditLimit, currentBalance;

    printf("Customer account number: ");
    scanf("%d", &accountNumber);

    printf("Customer credit limit (before recession): ");
    scanf("%f", &creditLimit);

    printf("Customer current balance: ");
    scanf("%f", &currentBalance);

    float newCreditLimit = creditLimit / 2.0;

    printf("New credit limit: %.2f\n", newCreditLimit);

    if ( currentBalance > newCreditLimit)
    {
        printf("Account #%d exceeds the new credit limit.", accountNumber);
    }

    return 0;
}
