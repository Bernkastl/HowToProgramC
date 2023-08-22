/*
 * 3.45 (Factorial) The factorial of a non-negative integer n is written n! (pronounced
 * "n factorial") and is defined as follows:
 * n! = n * (n - 1) * (n - 2) * ... * 1 (for values of n greater than or equal to 1)
 * and
 * n! = 1 (for n = 0).
 * For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
 * a) Write a program that reads a non-negative integer and computes and prints
 * its factorial.
 * b) Write a program that estimates the value of the mathematical constant e by
 * using the formula:
 * 
 *      e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + 1/5!
 * 
 * c) Write a program that computes the value of ex by using the formula:
 * 
 *      e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + x^5/5!
 */

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    int factorial = 1;
    int n = num;
    while (n != 0)
    {
        factorial *= n;
        n--;
    }
    printf("Factorial: %d\n", factorial);
    return 0;
}
