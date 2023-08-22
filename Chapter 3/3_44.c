/*
 * 3.44 (Sides of a Right Triangle) Write a program that reads three nonzero integers
 * and determines and prints whether they could be the sides of a right triangle.
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter 3 non-zero integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c)
    {
        printf("These numbers can represent a right triangle");
    }
    else
    {
        printf("These numbers do not represent a right triangle");
    }

    return 0;
}
