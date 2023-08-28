/*
 * 4.33 (Roman-Numeral Equivalent of Decimal Values) Write a program that prints a
 * table of the Roman-numeral equivalents for the decimal numbers in the range 1 to 100.
 */

#include <stdio.h>

int main(void)
{
    printf("%s", "Decimal\tRoman\n");

    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);

        int num = i;

        if (num >= 100)
        {
            printf("C");
            num -= 100;
        }

        if (num >= 90)
        {
            printf("XC");
            num -= 90;
        }

        if (num >= 50)
        {
            printf("L");
            num -= 50;
        }

        if (num >= 40)
        {
            printf("XL");
            num -= 40;
        }

        while (num >= 10)
        {
            printf("X");
            num -= 10;
        }

        if (num >= 9)
        {
            printf("IX");
            num -= 9;
        }

        if (num >= 5)
        {
            printf("V");
            num -= 5;
        }

        if (num >= 4)
        {
            printf("IV");
            num -= 4;
        }

        while (num > 0)
        {
            printf("I");
            num -= 1;
        }

        printf("\n");
    }

    return 0;
}
