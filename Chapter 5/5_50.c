/*
 *5.50 (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in
 *CAI environments is student fatigue. This can be reduced by varying the computer’s
 *responses to hold the student’s attention. Modify the program of Exercise 5.49 so
 *that various comments are displayed for each answer as follows:
 *Possible responses to a correct answer:
 *Very good!
 *Excellent!
 *Nice work!
 *Keep up the good work!
 *Possible responses to an incorrect answer:
 *No. Please try again.
 *Wrong. Try once more.
 *Don't give up!
 *No. Keep trying.
 *Use random-number generation to choose a number from 1 to 4 that will be
 *used to select one of the four appropriate responses to each correct or incorrect
 *answer. Use a switch statement to issue the responses.
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

    while (1)
    {
        int firstNumber = generateNumber();
        int secondNumber = generateNumber();

        int answer;
        do
        {
            printf("How much is %d times %d? ", firstNumber, secondNumber);
            scanf("%d", &answer);
            if (answer == firstNumber * secondNumber)
            {
                praise();
            }
            else
            {
                blame();
            }
        } while (answer != firstNumber * secondNumber);
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
