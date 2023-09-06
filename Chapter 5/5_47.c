/*
 * 5.47 (Craps Game Modification) Modify the craps program of Fig. 5.7 to allow wagering.
 * Package as a function the portion of the program that runs one game of craps.
 * Initialize variable bankBalance to 1000 dollars. Prompt the player to enter a wager.
 * Use a while loop to check that wager is less than or equal to bankBalance, and if not,
 * prompt the user to reenter wager until a valid wager is entered. After a correct wager
 * is entered, run one game of craps. If the player wins, increase bankBalance by wager
 * and print the new bankBalance. If the player loses, decrease bankBalance by wager,
 * print the new bankBalance, check whether bankBalance has become zero, and if so
 * print the message, "Sorry. You busted!" As the game progresses, print various messages
 * to create some “chatter” such as, "Oh, you're going for broke, huh?" or "Aw
 * cmon, take a chance!" or "You're up big. Now's the time to cash in your chips!"
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status
{
    CONTINUE,
    WON,
    LOST
};

int rollDice(void);
int playCraps(int bankBalance, int wager);

int main(void)
{
    srand(time(NULL));

    int bankBalance = 1000;
    int wager;

    while (bankBalance > 0)
    {
        printf("Bank balance: $%d\n", bankBalance);

        do
        {
            printf("Enter your wager: ");
            scanf("%d", &wager);
            if (wager > bankBalance)
            {
                printf("Invalid wager. You cannot bet more than your bank balance.\n");
            }
        } while (wager > bankBalance);

        bankBalance = playCraps(bankBalance, wager);

        if (bankBalance == 0)
        {
            printf("Sorry. You busted!\n");
        }
        else
        {
            if (bankBalance < 100)
            {
                printf("Oh, you're going for broke, huh?\n");
            }
            else if (bankBalance > 1000)
            {
                printf("You're up big. Now's the time to cash in your chips!\n");
            }
            else
            {
                printf("Aw cmon, take a chance!\n");
            }
        }
    }
}

int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}

int playCraps(int bankBalance, int wager)
{
    int myPoint = 0;
    enum Status gameStatus = CONTINUE;
    int sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        bankBalance += wager;
        printf("Player wins! Bank balance is now $%d\n", bankBalance);
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        bankBalance -= wager;
        printf("Player loses! Bank balance is now $%d\n", bankBalance);
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }

    while (CONTINUE == gameStatus)
    {
        sum = rollDice();

        if (sum == myPoint)
        {
            gameStatus = WON;
            bankBalance += wager;
            printf("Player wins! Bank balance is now $%d\n", bankBalance);
        }
        else if (7 == sum)
        {
            gameStatus = LOST;
            bankBalance -= wager;
            printf("Player loses! Bank balance is now $%d\n", bankBalance);
        }
    }

    if (WON == gameStatus)
    {
        puts("Player wins");
    }
    else
    {
        puts("Player loses");
    }

    return bankBalance;
}
