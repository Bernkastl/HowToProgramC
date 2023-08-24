/*
 * 4.14 (Factorials) The factorial function is used frequently in probability problems.
 * The factorial of a positive integer n (written n! and pronounced “n factorial”) is equal
 * to the product of the positive integers from 1 to n. Write a program that evaluates the
 * factorials of the integers from 1 to 5. Print the results in tabular format. What difficulty
 * might prevent you from calculating the factorial of 20?
 */

#include <stdio.h>

int factorial(int n)
{
    int factorial = 1;
    while (n != 0)
    {
        factorial *= n;
        n--;
    }
    return factorial;
}

int main(void)
{
    printf("%s", "n\tn!\n");

    for (int i = 1; i <= 5; i++)
    {
        int nFactorial = factorial(i);
        printf("%d\t%d\n", i, nFactorial);
    }
    
    return 0;
}
