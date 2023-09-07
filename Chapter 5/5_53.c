/*
 * 5.53 (Computer-Assisted Instruction: Varying the Types of Problems) Modify the program
 * of Exercise 5.52 to allow the user to pick a type of arithmetic problem to study.
 * An option of 1 means addition problems only, 2 means subtraction problems only, 3
 * means multiplication problems only and 4 means a random mixture of all these types.
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
    int problemType;

    printf("Enter problem type (1: Addition, 2: Subtraction, 3: Multiplication, 4: Random): ");
    scanf("%d", &problemType);

    printf("Enter difficulty level (1-3): ");
    scanf("%d", &level);

    for (int answers = 0; answers < 10;)
    {
        int firstNumber = generateNumber(level);
        int secondNumber = generateNumber(level);

        int answer;
        char operatorSymbol;

        switch (problemType)
        {
        case 1:
            operatorSymbol = '+';
            break;
        case 2:
            operatorSymbol = '-';
            break;
        case 3:
            operatorSymbol = '*';
            break;
        case 4:
            switch (rand() % 3)
            {
            case 0:
                operatorSymbol = '+';
                break;
            case 1:
                operatorSymbol = '-';
                break;
            case 2:
                operatorSymbol = '*';
                break;
            }
            break;
        }

        int correctAnswer;
        do
        {
            printf("How much is %d %c %d? ", firstNumber, operatorSymbol, secondNumber);
            scanf("%d", &answer);
            totalAnswers++;

            switch (operatorSymbol)
            {
            case '+':
                correctAnswer = firstNumber + secondNumber;
                break;
            case '-':
                correctAnswer = firstNumber - secondNumber;
                break;
            case '*':
                correctAnswer = firstNumber * secondNumber;
                break;
            }

            if (answer == correctAnswer)
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
        } while (answer != correctAnswer && answers < 10);
    }

    float correctPercentage = (float)correctAnswers / totalAnswers;

    if (correctPercentage < 0.75)
    {
        printf("Please ask your teacher for extra help.\n");
        correctAnswers = 0;
    }
    else
    {
        printf("Congratulations, you are ready to go to the next level!\n");
        correctAnswers = 0;
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
