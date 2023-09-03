/*
 * 5.27 (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself.
 * For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not. Write a function that
 * determines whether a number is prime. Use this function in a program that determines
 * and prints all the prime numbers between 1 and 10,000. How many of these 10,000
 * numbers do you really have to test before being sure that you have found all the primes?
 * Initially you might think that n/2 is the upper limit for which you must test to see
 * whether a number is prime, but you need go only as high as the square root of n. Rewrite
 * the program, and run it both ways. Estimate the performance improvement.
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int);

int main(void)
{
    for (int i = 1; i <= 10000; i++)
    {
        if (isPrime(i) == true)
        {
            printf("% d is a prime number\n", i);
        }
    }
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    int divisors = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            divisors++;
    }

    return (divisors > 0) ? false : true;
}
