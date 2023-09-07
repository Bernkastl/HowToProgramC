/*
 * 5.52 (Computer-Assisted Instruction: Difficulty Levels) Exercises 5.49–5.51 developed
 * a computer-assisted instruction program to help teach an elementary-school
 * student multiplication. Modify the program to allow the user to enter a difficulty level.
 * At a difficulty level of 1, the program should use only single-digit numbers in the
 * problems; at a difficulty level of 2, numbers as large as two digits, and so on.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(int);
void praise(void);
void blame(void);

int main(void)
{
    srand(time(NULL));

    int correctAnswers = 0;
    int totalAnswers = 0;
    int level;

    printf("Enter difficulty level (1-3): ");
    scanf("%d", &level);

    for (int answers = 0; answers < 10; )
    {
        int firstNumber = generateNumber(level);
        int secondNumber = generateNumber(level);

        int answer;
        do
        {
            printf("How much is %d times %d? ", firstNumber, secondNumber);
            scanf("%d", &answer);
            totalAnswers++;
            if (answer == firstNumber * secondNumber)
            {
                praise();
                correctAnswers++;
                answers++;
            }
            else
            {
                blame();
                answers++;
            }
        } while (answer != firstNumber * secondNumber && answers < 10);
    }

    float correctPercentage = (float)correctAnswers / totalAnswers;

    if (correctPercentage < 0.75)
    {
        printf("Please ask your teacher for extra help.\n");
        correctAnswers = 0; // Reset correctAnswers for the next student
    }
    else
    {
        printf("Congratulations, you are ready to go to the next level!\n");
        correctAnswers = 0; // Reset correctAnswers for the next student
    }
}

int generateNumber(int level)
{
    switch (level)
    {
    case 1:
        return 1 + rand() % 9;
        break;
    
    case 2:
        return 10 + rand() % 90;
        break;

    case 3:
        return 100 + rand() % 900;
        break;

    default:
        break;
    }
}

void praise()
{
    int choice = 1 + rand() % 4;

    switch (choice)
    {
    case 1:
        printf("Very good!\n");
        break;

    case 2:
        printf("Excellent!\n");
        break;

    case 3:
        printf("Nice work!\n");
        break;

    case 4:
        printf("Keep up the good work!\n");
        break;
    }
}

void blame()
{
    int choice = 1 + rand() % 4;

    switch (choice)
    {
    case 1:
        printf("No. Please try again.\n");
        break;

    case 2:
        printf("Wrong. Try once more.\n");
        break;

    case 3:
        printf("Don't give up!\n");
        break;

    case 4:
        printf("No. Keep trying.\n");
        break;
    }
}
