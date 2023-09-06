/*
 * 5.49 (Computer-Assisted Instruction) The use of computers in education is referred
 * to as computer-assisted instruction (CAI). Write a program that will help an elementary-
 * school student learn multiplication. Use the rand function to produce two positive
 * one-digit integers. The program should then prompt the user with a question, such as
 * How much is 6 times 7?
 * The student then inputs the answer. Next, the program checks the student’s answer.
 * If it’s correct, display the message "Very good!" and ask another multiplication question.
 * If the answer is wrong, display the message "No. Please try again." and let the
 * student try the same question repeatedly until the student finally gets it right. A separate
 * function should be used to generate each new question. This function should
 * be called once when the application begins execution and each time the user answers
 * the question correctly.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateNumber(void);

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
                printf("Very good!\n");
            }
            else
            {
                printf("No. Please try again.\n");
            }
        } while (answer != firstNumber * secondNumber);
    }
}

int generateNumber()
{
    return 1 + rand() % 9;
}
