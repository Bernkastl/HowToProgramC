/*
 * 3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23,
 * find the two largest values of the 10 numbers. You may input each number only once. *
 */

#include <stdio.h>

int main(void)
{
    int counter = 1, largest = 0, secondLargest = 0, number;

    while (counter <= 10)
    {
        printf("Enter #%d: ", counter);
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }
        else if (number > secondLargest)
        {
            secondLargest = number;
        }

        counter++;
    }

    printf("\nLargest number is %d", largest);
    printf("\nSecond largest number is %d", secondLargest);

    return 0;
}
