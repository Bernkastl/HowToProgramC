/*
 * 5.33 (Guess the Number Modification) Modify your Exercise 5.32 solution to count
 * the number of guesses the player makes. If the number is 10 or fewer, print "Either
 * you know the secret or you got lucky!" If the player guesses the number in 10 tries,
 * then print "Aha! You know the secret!" If the player makes more than 10 guesses, then
 * print "You should be able to do better!" Why should it take no more than 10 guesses?
 * Well, with each “good guess” the player should be able to eliminate half of the
 * numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int selectNumber(void);

int main(void)
{
    srand(time(NULL));
    char playAgain;

    do
    {
        int guessCount = 0;
        int answer = selectNumber();

        printf("I have a number between 1 and 1000\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess:\n");

        while (1)
        {
            printf("Your guess: ");
            int guess;
            scanf("%d", &guess);
            guessCount++;

            if (guess == answer)
            {
                printf("Excellent! You guessed the number!\n");
                if (guessCount > 10)
                {
                    printf("You should be able to do better!\n");
                }
                else if (guessCount < 10)
                {
                    printf("Either you know the secret or you got lucky!\n");
                }
                else if (guessCount == 10)
                {
                    printf("Aha! You know the secret!\n");
                }
                break;
            }
            else if (guess < answer)
            {
                printf("Too low. Try again.\n");
                continue;
            }
            else if (guess > answer)
            {
                printf("Too high. Try again.\n");
                continue;
            }
        }

        printf("Would you like to play again (y or n)? ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y');
}

int selectNumber(void)
{
    return 1 + rand() % 1000;
}
