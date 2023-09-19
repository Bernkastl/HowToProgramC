/*
 * 6.23 (Turtle Graphics) The Logo language made the concept of turtle graphics famous.
 * Imagine a mechanical turtle that walks around the room under the control of
 * a C program. The turtle holds a pen in one of two positions, up or down. While the
 * pen is down, the turtle traces out shapes as it moves; while the pen is up, the turtle
 * moves about freely without writing anything. In this problem, you’ll simulate the operation
 * of the turtle and create a computerized sketchpad as well.
 * Use a 50-by-50 array floor that’s initialized to zeros. Read commands from an
 * array that contains them. Keep track of the current turtle position at all times and
 * whether the pen is currently up or down. Assume that the turtle always starts at position
 * 0, 0 of the floor with its pen up. The set of turtle commands your program
 * must process are shown in the following table:
 * https://imgur.com/UIloOga
 * Suppose that the turtle is somewhere near the center of the floor. The following
 * “program” would draw and print a 12-by-12 square:
 * 2
 * 5,12
 * 3
 * 5,12
 * 3
 * 5,12
 * 3
 * 5,12
 * 1
 * 6
 * 9
 * As the turtle moves with the pen down, set elements of array floor to 1s. When the
 * 6 command is given, display an asterisk for each 1 in the array. For each zero, display
 * a blank. Write a program to implement the turtle-graphics capabilities discussed
 * here. Write several turtle graphics programs to draw interesting shapes. Add other
 * commands to increase the power of your turtle-graphics language.
*/


#include <stdio.h>
#include <stdbool.h>

enum Direction
{
    NORTH,
    EAST,
    SOUTH,
    WEST
};

#define MAX_BOUND 50
#define MAX_INPUT 100

void printBoard(const int[MAX_BOUND][MAX_BOUND]);
enum Direction moveRight(enum Direction);
enum Direction moveLeft(enum Direction);
void moveForward(int *, int *, enum Direction direction, int);
void getInstructions(int[MAX_INPUT][2]);
void invokeInstruction(int, int, bool *, int *, int *, enum Direction *direction, int[MAX_BOUND][MAX_BOUND]);

int main(void)
{
    // Initializations
    int board[MAX_BOUND][MAX_BOUND] = {0};
    int instructions[MAX_INPUT][2] = {0};

    int turtleYPosition = 0;
    int turtleXPosition = 0;
    enum Direction turtleDirection = EAST;
    bool penUp = false;

    getInstructions(instructions);

    for (size_t i = 0; i < MAX_INPUT; i++)
    {
        if (instructions[i][0] == 9)
            break;
        invokeInstruction(instructions[i][0], instructions[i][1], &penUp, &turtleXPosition, &turtleYPosition, &turtleDirection, board);
    }
}

void printBoard(const int board[MAX_BOUND][MAX_BOUND])
{
    for (size_t row = 0; row < MAX_BOUND; row++)
    {
        for (size_t col = 0; col < MAX_BOUND; col++)
        {
            if (board[row][col] == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

enum Direction moveRight(enum Direction d)
{
    enum Direction newDirection = ++d;

    if (newDirection > 3)
        return NORTH;
    else
        return newDirection;
}

enum Direction moveLeft(enum Direction d)
{
    enum Direction newDirection = --d;

    if (newDirection < 0)
        return WEST;
    else
        return newDirection;
}

void moveForward(int *x, int *y, enum Direction direction, int steps)
{
    switch (direction)
    {
    case NORTH:
        int newPosition = *x - steps;
        if (newPosition < 0)
            *x = 0;
        else
            *x = newPosition;
        break;

    case EAST:
        newPosition = *y + steps;
        if (newPosition > MAX_BOUND)
            *y = 50;
        else
            *y = newPosition;
        break;

    case SOUTH:
        newPosition = *x + steps;
        if (newPosition > MAX_BOUND)
            *x = 50;
        else
            *x = newPosition;
        break;

    case WEST:
        newPosition = *y - steps;
        if (newPosition < 0)
            *y = 0;
        else
            *y = newPosition;
        break;

    default:
        break;
    }
}

void getInstructions(int instructions[MAX_INPUT][2])
{
    printf("Input instructions (9 to terminate):\n");

    for (size_t i = 0; i < MAX_INPUT; i++)
    {
        int instruction, value = 0;
        scanf("%d", &instruction);

        if (instruction == 5)
        {
            getchar();
            scanf("%d", &value);
        }
        if (instruction == 9)
        {
            instructions[i][0] = instruction;
            return;
        }
        instructions[i][0] = instruction;
        instructions[i][1] = value;
    }
}

void invokeInstruction(int instruction, int secondaryInstruction, bool *penUp, int *x, int *y, enum Direction *direction, int board[MAX_BOUND][MAX_BOUND])
{
    switch (instruction)
    {
    case 1:
        *penUp = true;
        break;

    case 2:
        *penUp = false;
        break;

    case 3:
        *direction = moveRight(*direction);
        break;

    case 4:
        *direction = moveLeft(*direction);
        break;

    case 5:
        if (!*penUp)
        {
            int prevX = *x;
            int prevY = *y;
            moveForward(x, y, *direction, secondaryInstruction);

            while (prevX != *x || prevY != *y)
            {
                if (prevX >= 0 && prevX < MAX_BOUND && prevY >= 0 && prevY < MAX_BOUND)
                    board[prevX][prevY] = 1;
                if (*x > prevX)
                    prevX++;
                else if (*x < prevX)
                    prevX--;
                if (*y > prevY)
                    prevY++;
                else if (*y < prevY)
                    prevY--;
            }
        }
        break;

    case 6:
        printBoard(board);
        break;

    default:
        break;
    }
}
