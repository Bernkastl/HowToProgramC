/*
 * 6.19 (Dice Rolling) Write a program that simulates rolling two dice. The program
 * should use rand twice to roll the first and second die, respectively, then calculate their
 * sum. Because each die can have an integer value from 1 to 6, the sum of the values will
 * vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least frequent
 * sums. The following diagram shows the 36 possible combinations of the two dice:
 * https://imgur.com/jlDGhD8
 * Your program should roll the two dice 36,000 times. Use a one-dimensional array to
 * tally the numbers of times each possible sum appears. Print the results in tabular format.
 * Also, determine whether the totals are reasonable—for example, there are six
 * ways to roll a 7, so approximately one-sixth of all the rolls should be 7.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define POSSIBLE 13

int rollDie(void);

int main(void)
{
    srand(time(NULL));
    int frequency[POSSIBLE] = {0};

    for (size_t i = 1; i <= ROLLS; i++)
    {
        int roll = rollDie() + rollDie();
        frequency[roll]++;
    }

    printf("Results after 36000 double rolls\n");
    printf("2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");

    for (size_t i = 2; i < POSSIBLE; i++)
    {
        printf("%d\t", frequency[i]);
    }
}

int rollDie(void)
{
    return 1 + rand() % 6;
}
