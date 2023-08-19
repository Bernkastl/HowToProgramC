/*
 * 2.18 (Comparing Integers) Write a program that reads two integers from the user
 * then displays the larger number followed by the words “is larger.” If the numbers
 * are equal, display the message “These numbers are equal.” Use only the single-selection
 * form of the if statement you learned in this chapter.
 */

#include <stdio.h>

int main(void)
{
    printf("Enter two integers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is larger.\n", num1);
    }
    if (num2 > num1)
    {
        printf("%d is larger.\n", num2);
    }
    if (num1 == num2)
    {
        printf("These numbers are equal.\n");
    }

    return 0;
}
