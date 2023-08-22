/*
 * 3.35 (Printing the Decimal Equivalent of a Binary Number) Input a binary integer (5
 * digits or fewer) containing only 0s and 1s and print its decimal equivalent. [Hint: Use
 * the remainder and division operators to pick off the “binary” number’s digits one at a
 * time from right-to-left. Just as in the decimal number system, in which the rightmost
 * digit has a positional value of 1, and the next digit left has a positional value of 10, then
 * 100, then 1000, and so on, in the binary number system the rightmost digit has a positional
 * value of 1, the next digit left has a positional value of 2, then 4, then 8, and so
 * on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. The
 * decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]
 */

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a 5 digit binary number: ");
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

    printf("The decimal representation of this number is: %d", d1 * 1 + d2 * 2 + d3 * 4 + d4 * 8 + d5 * 16);
    return 0;
}
