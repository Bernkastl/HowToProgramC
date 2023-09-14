/*
 * 6.20 (Craps Game Statistics) Write a program that runs 1,000,000 games of craps
 * (without human intervention) and answers each of the following questions:
 *      a) How many games are won on the first roll, second roll, …, twentieth roll
 *         and after the twentieth roll?
 *      b) How many games are lost on the first roll, second roll, …, twentieth roll and
 *         after the twentieth roll?
 *      c) What are the chances of winning at craps? You should discover that craps is
 *         one of the fairest casino games. What do you suppose this means?
 *      d) What’s the average length of a game of craps?
 *      e) Do the chances of winning improve with the length of the game?
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_GAMES 1000000
#define MAX_ROLLS 21

enum Status
{
    CONTINUE,
    WON,
    LOST
};

int rollDice(void);

int main(void)
{
    srand(time(NULL));

    int winCount[MAX_ROLLS] = {0};
    int lossCount[MAX_ROLLS] = {0};
    int totalRolls = 0;
    int totalWins = 0;

    for (size_t i = 0; i < NUM_GAMES; i++)
    {
        int myPoint = 0;
        enum Status gameStatus = CONTINUE;
        int rolls = 0;

        while (CONTINUE == gameStatus)
        {
            int sum = rollDice();
            rolls++;

            switch (sum)
            {
            case 7:
            case 11:
                gameStatus = WON;
                break;
            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                break;
            default:
                gameStatus = CONTINUE;
                myPoint = sum;
                break;
            }

            if (CONTINUE == gameStatus)
            {
                sum = rollDice();
                rolls++;

                if (sum == myPoint)
                {
                    gameStatus = WON;
                }
                else if (7 == sum)
                {
                    gameStatus = LOST;
                }
            }
        }

        if (gameStatus == WON)
        {
            if (rolls <= MAX_ROLLS)
            {
                winCount[rolls]++;
            }
            else
            {
                winCount[MAX_ROLLS]++;
            }
            totalWins++;
        }
        else
        {
            if (rolls <= MAX_ROLLS)
            {
                lossCount[rolls]++;
            }
            else
            {
                lossCount[MAX_ROLLS]++;
            }
        }

        totalRolls += rolls;
    }

    for (int i = 1; i <= MAX_ROLLS; i++)
    {
        printf("Games won on roll %d: %d\n", i, winCount[i]);
    }
    printf("Games won on or after the twentieth roll: %d\n", winCount[MAX_ROLLS]);

    for (int i = 1; i <= MAX_ROLLS; i++)
    {
        printf("Games lost on roll %d: %d\n", i, lossCount[i]);
    }
    printf("Games lost on or after the twentieth roll: %d\n", lossCount[MAX_ROLLS]);

    double winPercentage = (double)totalWins / NUM_GAMES * 100.0;
    printf("Chances of winning at craps: %.2lf%%\n", winPercentage);

    double averageRolls = (double)totalRolls / NUM_GAMES;
    printf("Average length of a game of craps: %.2lf rolls\n", averageRolls);
}

int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    return die1 + die2;
}
