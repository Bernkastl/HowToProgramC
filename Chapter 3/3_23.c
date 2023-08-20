/*
 * 3.23 (Find the Largest Number) Finding the largest number (i.e., the maximum of
 * a group of numbers) is used frequently in computer applications. For example, a program
 * that determines the winner of a sales contest would input the number of units
 * sold by each salesperson. The salesperson who sells the most units wins the contest.
 * Write a pseudocode program and then a program that uses scanf to input a series of
 * 10 non-negative numbers and determines and prints the largest of the numbers. Your
 * program should use three variables:
 *
 *      a) counter—A counter to count to 10 (i.e., to keep track of how many numbers
 *         have been input and to determine when all 10 numbers have been processed).
 *      b) number—The current number input to the program.
 *      c) largest—The largest number found so far.
 */

#include <stdio.h>

int main(void)
{
    int counter = 1, largest = 0, number;

    while (counter <= 10)
    {
        printf("Enter #%d: ", counter);
        scanf("%d", &number);

        if(number > largest)
        {
            largest = number;
        }

        counter++;
    }

    printf("\nLargest number is %d", largest);
    
    return 0;
}
