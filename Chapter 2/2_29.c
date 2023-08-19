/*
 * 2.29 (Sort in Ascending Order) Write a program that inputs three different numbers
 * from the user. Display the numbers in increasing order. Recall that an if statement’s
 * body can contain more than one statement. Prove that your script works by running
 * it on all six possible orderings of the numbers. Does your script work with duplicate
 * numbers? [This is challenging. In later chapters you’ll do this more conveniently and
 * with many more numbers.]
 */

#include <stdio.h>

int main(void)
{
    printf("Enter three different numbers: ");

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find min
    int min = num1;
    if (num2 < min)
        min = num2;
    if (num3 < min)
        min = num3;

    // Find max
    int max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;

    // Find mid
    int mid = num1;
    if (num2 != min && num2 != max)
        mid = num2;
    if (num3 != min && num3 != max)
        mid = num3;

    printf("Ascending order: %d %d %d", min, mid, max);

    return 0;
}
