/*
 * 5.30 (Quality Points for Student’s Grades) Write a function toQualityPoints that
 * inputs a student’s average and returns 4 if it’s 90–100, 3 if it’s 80–89, 2 if it’s 70–79,
 * 1 if it’s 60–69, and 0 if the average is lower than 60.
 */

#include <stdio.h>

int toQualityPoints(int average);

int main(void)
{
    int avg;

    printf("Enter the student average: ");
    scanf("%d", &avg);

    printf("Quality Point: %d", toQualityPoints(avg));
}

int toQualityPoints(int average)
{
    if (average >= 90)
        return 4;
    else if (average >= 80)
        return 3;
    else if (average >= 70)
        return 2;
    else if (average >= 60)
        return 1;
    else
        return 0;
}
