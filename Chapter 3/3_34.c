/*
 * 3.34 (Palindrome Tester) A palindrome is a number or a text phrase that reads the
 * same backward as forward. For example, each of the following five-digit integers is a
 * palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a fivedigit
 * integer and determines whether or not it’s a palindrome. [Hint: Use the division
 * and remainder operators to separate the number into its individual digits.] *
 */

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    int d1 = num % 10;
    num /= 10;
    int d2 = num % 10;
    num /= 10;
    int d3 = num % 10;
    num /= 10;
    int d4 = num % 10;
    num /= 10;
    int d5 = num % 10;

    if (d5 == d1 && d2 == d4)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
    return 0;
}
