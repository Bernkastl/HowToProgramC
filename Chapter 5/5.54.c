/*
 * 5.54 (The Tortoise and the Hare Race) In this problem, you’ll recreate one of the truly
 * great moments in history—the classic race of the tortoise and the hare. You’ll use random-
 * number generation to develop a simulation of this memorable event.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

void startRace(void);
int generateNumber(void);
int getTortoiseStep(void);
int getHareStep(void);
int moveAnimal(int, int);
void printField(int, int);
bool isGameOver(int, int);

int main(void)
{
    srand(time(NULL));

    startRace();

    int harePosition = 1;
    int tortoisePosition = 1;
    bool isOver;

    printField(harePosition, tortoisePosition);

    do
    {
        Sleep(500);
        int hareStep = getHareStep();
        int tortoiseStep = getTortoiseStep();

        harePosition = moveAnimal(harePosition, hareStep);
        tortoisePosition = moveAnimal(tortoisePosition, tortoiseStep);

        printField(harePosition, tortoisePosition);

        isOver = isGameOver(harePosition, tortoisePosition);

    }
    while (!isOver);
    
}

void startRace(void)
{
    printf("ON YOUR MARK, GET SET\n");
    printf("BANG             !!!!\n");
    printf("AND THEY'RE OFF  !!!!\n\n");
}

int generateNumber(void)
{
    return 1 + rand() % 10;
}

int getTortoiseStep(void)
{
    int roll = generateNumber();

    switch (roll)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        return 3;
        break;

    case 6:
    case 7:
        return -6;
        break;

    default:
        return 1;
    }
}

int getHareStep(void)
{
    int roll = generateNumber();
    switch (roll)
    {
    case 1:
    case 2:
        return 0;
        break;

    case 3:
    case 4:
        return 9;
        break;

    case 5:
        return -12;
        break;

    case 6:
    case 7:
    case 8:
        return 1;
        break;

    default:
        return -2;
        break;
    }
}

int moveAnimal(int position, int steps)
{
    int newPosition = position + steps;

    if (newPosition < 1)
        return 1;

    else if (newPosition > 70)
        return 70;

    else
        return newPosition;
}

void printField(int harePosition, int tortoisePosition)
{
    system("cls");

    for (int i = 1; i <= 70; i++)
    {
        if (i == harePosition || i == tortoisePosition)
        {
            if (harePosition == tortoisePosition)
            {
                printf("OUCH!!!");
            }
            else if (i == harePosition)
            {
                printf("H");
            }
            else if (i == tortoisePosition)
            {
                printf("T");
            }
        }
        else
        {
            printf("-");
        }
    }
    printf("\n");
}

bool isGameOver(int hareScore, int tortoiseScore)
{
    if (hareScore == 70 && tortoiseScore == 70)
    {
        printf("It's a tie.\n");
        return true;
    }
    else if (tortoiseScore == 70)
    {
        printf("TORTOISE WINS!!! YAY!!!\n");
        return true;
    }
    else if (hareScore == 70)
    {
        printf("Hare wins. Yuch.\n");
        return true;
    }
    else
    {
        return false;
    }
}
