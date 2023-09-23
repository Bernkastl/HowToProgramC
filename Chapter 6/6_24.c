/*
 * 6.24 (Knight’s Tour) One of the more interesting puzzles for chess buffs is the
 * Knight’s Tour problem, originally proposed by the mathematician Euler. The question
 * is this: Can the chess piece called the knight move around an empty chessboard
 * and touch each of the 64 squares once and only once? We study this intriguing problem
 * in-depth here.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_BOUND 8

void clearBoard(int[MAX_BOUND][MAX_BOUND]);
bool validMove(int, int, int[MAX_BOUND][MAX_BOUND]);
void printBoard(int[MAX_BOUND][MAX_BOUND]);

int main(void)
{
    int board[MAX_BOUND][MAX_BOUND];

    int score[MAX_BOUND][MAX_BOUND] = {{2, 3, 4, 4, 4, 4, 3, 2},
                                       {3, 4, 6, 6, 6, 6, 4, 3},
                                       {4, 6, 8, 8, 8, 8, 6, 4},
                                       {4, 6, 8, 8, 8, 8, 6, 4},
                                       {4, 6, 8, 8, 8, 8, 6, 4},
                                       {4, 6, 8, 8, 8, 8, 6, 4},
                                       {3, 4, 6, 6, 6, 6, 4, 3},
                                       {2, 3, 4, 4, 4, 4, 3, 2}};

    int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

    srand(time(NULL));

    clearBoard(board);

    int currentRow = rand() % MAX_BOUND;
    int currentCol = rand() % MAX_BOUND;

    int moveNumber = 0;
    board[currentRow][currentCol] = ++moveNumber;

    bool done = false;
    while (!done)
    {
        int lowest = 9;
        int minScore = lowest;
        int minRow, minCol;

        for (size_t i = 0; i < 8; i++)
        {
            int testRow = currentRow + vertical[i];
            int testCol = currentCol + horizontal[i];

            if (validMove(testRow, testCol, board))
            {
                if (score[testRow][testCol] < minScore)
                {
                    minScore = score[testRow][testCol];
                    minRow = testRow;
                    minCol = testCol;
                }
                score[testRow][testCol]--;
            }
        }

        if (minScore == lowest)
        {
            done = true;
        }
        else
        {
            currentRow = minRow;
            currentCol = minCol;
            board[currentRow][currentCol] = ++moveNumber;
        }
    }

    printf("The knight made %d moves.\n", moveNumber);

    if (moveNumber == 64)
        printf("Full tour!\n\n");

    printf("Chessboard after the tour:\n\n");
    printBoard(board);
}

void clearBoard(int board[MAX_BOUND][MAX_BOUND])
{
    for (size_t i = 0; i < MAX_BOUND; i++)
        for (size_t j = 0; j < MAX_BOUND; j++)
            board[i][j] = 0;
}

bool validMove(int row, int col, int board[MAX_BOUND][MAX_BOUND])
{
    return (row >= 0 && row <= 7 && col >= 0 && col <= 7 && board[row][col] == 0);
}

void printBoard(int board[MAX_BOUND][MAX_BOUND])
{
    for (int row = 0; row < MAX_BOUND; row++)
    {
        for (int col = 0; col < MAX_BOUND; col++)
        {
            printf("%02d ", board[row][col]);
        }
        printf("\n");
    }
}
