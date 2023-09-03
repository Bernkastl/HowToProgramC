/*
 * 5.28 (Reversing Digits) Write a function that takes an integer value and returns the
 * number with its digits reversed. For example, given the number 7631, the function
 * should return 1367.
 */

#include <stdio.h>

int reverseDigit(int);

int main(void)
{
    int num;

    printf("Enter a number (Maximum 4 digits): ");
    scanf("%d", &num);

    printf("%d reversed is %d", num, reverseDigit(num));
}

int reverseDigit(int num)
{
    // increase decimalPlace if you want more than 4 digits, 100000 for example to support 5
    int decimalPlace = 10000;
    int result = 0;

    while(num > 0)
    {
        int digit = num % 10;
        num /= 10;

        if(num <= decimalPlace)
        {
            decimalPlace /= 10;
        }
        result += digit * decimalPlace;
    }
    return result;
}
