/*
 * 5.51 (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated
 * computer-assisted instruction systems monitor the student’s performance
 * over a period of time. The decision to begin a new topic is often based on the student’s
 * success with previous topics. Modify the program of Exercise 5.50 to count the
 * number of correct and incorrect responses typed by the student. After the student
 * types 10 answers, your program should calculate the percentage that are correct. If
 * the percentage is lower than 75%, display "Please ask your teacher for extra
 * help.", then reset the program so another student can try it. If the percentage is 75%
 * or higher, display "Congratulations, you are ready to go to the next level!",
 * then reset the program so another student can try it.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(void);
void praise(void);
void blame(void);

int main(void)
{
    srand(time(NULL));

    int correctAnswers = 0;
    int totalAnswers = 0;

    for (int answers = 0; answers < 10; )
    {
        int firstNumber = generateNumber();
        int secondNumber = generateNumber();

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

int generateNumber()
{
    return 1 + rand() % 9;
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
