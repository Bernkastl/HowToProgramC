/*
 * 3.22 (Printing Numbers from a Loop) Write a program that utilizes looping to print
 * the numbers from 1 to 10 side by side on the same line with three spaces between
 * numbers.
 */

#include <stdio.h>

int main(void)
{
    int count = 1;
    while (count <= 10)
    {
        printf("%d   ", count);
        count++;
    }
    
}
