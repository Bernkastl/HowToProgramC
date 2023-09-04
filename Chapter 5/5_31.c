/*
 * 5.31 (Coin Tossing) Write a program that simulates coin tossing. For each toss, display
 * Heads or Tails. Let the program toss the coin 100 times, and count the number
 * of heads and tails. Display the results. The program should call a function flip that
 * takes no arguments and returns 0 for tails and 1 for heads. If the program realistically
 * simulates the coin tossing, then each side of the coin should appear approximately
 * half the time for a total of approximately 50 heads and 50 tails.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int flip(void);

int main(void)
{
    int tails_count = 0;
    int heads_count = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        if (flip() == 0)
        {
            printf("Tails\n");
            tails_count++;
        }
        else
        {
            printf("Heads\n");
            heads_count++;
        }
    }

    printf("Total number of heads: %d\n", heads_count);
    printf("Total number of tails: %d\n", tails_count);
}

int flip(void)
{
    return rand() % 2;
}
