/*
 * 4.25 (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a program
 * that prints a table of the binary, octal and hexadecimal equivalents of the decimal
 * numbers 1—256. If you’re not familiar with these number systems, read online
 * Appendix E before you attempt this exercise. [Note: You can display an integer as an
 * octal or hexadecimal value with the conversion specifications %o and %X, respectively.]
 */

#include <stdio.h>

int main(void)
{
    printf("%s", "Decimal\tBinary\tOctal\tHexadecimal\n");

    for (int i = 1; i < 256; i++)
    {
        printf("%d\t", i);

        int num = i;
        int binary = 0;
        int digitPosition = 1;

        while (num > 0)
        {
            int remainder = num % 2;
            binary = binary + remainder * digitPosition;
            digitPosition *= 10; // Move to the next digit position
            num = num / 2;
        }

        printf("%d\t%o\t%X\n", binary, i, i);
    }

    return 0;
}
