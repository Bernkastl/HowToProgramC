/*
 * 5.23 (Time in Seconds) Write a function that takes the time as three integer arguments
 * (for hours, minutes and seconds) and returns the number of seconds since the
 * last time the clock “struck 12.” Use this function to calculate the amount of time in
 * seconds between two times, both of which are within one 12-hour cycle of the clock.
 */

#include <stdio.h>
#include <math.h>

int calculateSeconds(int, int, int);

int main(void)
{
    int hour1, minute1, second1;
    int hour2, minute2, second2;

    printf("Enter the first time: ");
    scanf("%d %d %d", &hour1, &minute1, &second1);

    printf("Enter the second time: ");
    scanf("%d %d %d", &hour2, &minute2, &second2);

    int firstTimeInSeconds = calculateSeconds(hour1, minute1, second1);
    int secondTimeInSeconds = calculateSeconds(hour2, minute2, second2);

    printf("The difference between the times is: %d seconds", abs(firstTimeInSeconds - secondTimeInSeconds));
}

int calculateSeconds(int hours, int minutes, int seconds)
{
    return 60 * 60 * hours + 60 * minutes + seconds;
}
