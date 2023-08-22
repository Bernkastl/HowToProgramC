/*
 * 3.43 (Sides of a Triangle) Write a program that reads three nonzero integer values
 * and determines and prints whether they could represent the sides of a triangle.
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter 3 non-zero integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("These numbers can represent the sides of a triangle");
    }
    else
    {
        printf("These numbers do not represent the sides of a triangle");
    }

    return 0;
}
