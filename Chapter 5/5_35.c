/*
 * 5.35 (Fibonacci) The Fibonacci series
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, …
 * begins with the terms 0 and 1 and has the property that each succeeding term is the
 * sum of the two preceding terms. First, write a nonrecursive function fibonacci(n)
 * that calculates the nth Fibonacci number. Use int for the function’s parameter and
 * unsigned long long int for its return type. Then, determine the largest Fibonacci
 * number that can be printed on your system.
 */

#include <stdio.h>

unsigned long long fibonacci(int);

int main(void)
{    
    for (int i = 0; i <= 100000; i++)
    {
        printf("fibonacci(%d) = %llu\n", i, fibonacci(i));
    }
}

unsigned long long fibonacci(int number)
{
    unsigned long long num1 = 0, num2 = 1, sum;

    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;

    for (int i = 2; i <= number; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return sum;
}
