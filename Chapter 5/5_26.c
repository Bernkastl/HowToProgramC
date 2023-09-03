/*
 * 5.26 (Perfect Numbers) An integer number is said to be a perfect number if its factors,
 * including 1 (but not the number itself), sum to the number. For example, 6 is a perfect
 * number because 6 = 1 + 2 + 3. Write a function isPerfect that determines
 * whether parameter number is a perfect number. Use this function in a program that
 * determines and prints all the perfect numbers between 1 and 1000. Print the factors
 * of each perfect number to confirm that the number is indeed perfect. Challenge the
 * power of your computer by testing numbers much larger than 1000.
 */

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int);

int main(void)
{
    for (int i = 1; i <= 1000; i++)
    {
        if (isPerfect(i) == true)
        {
            printf("% d is perfect\n", i);
        }
    }
}

bool isPerfect(int n)
{
    int sum = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n && n != 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
