/*
 * 2.17 (Displaying Values with printf) Write a program that displays the numbers 1
 * to 4 on the same line. Write the program using the following methods.
 * a) Using one printf statement with no conversion specifications.
 * b) Using one printf statement with four conversion specifications.
 * c) Using four printf statements.
 */

#include <stdio.h>

int main(void)
{
    // A
    printf("1 2 3 4\n");

    // B
    printf("%d %d %d %d\n", 1, 2, 3, 4);

    // C
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");

    return 0;
}
