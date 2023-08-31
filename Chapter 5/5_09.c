/*
 * (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up
 * to three hours and an additional $0.50 per hour for each hour or part thereof over three
 * hours. The maximum charge for any given 24-hour period is $10.00. Assume that no
 * car parks for longer than 24 hours at a time. Write a program that calculates and prints
 * the parking charges for each of three customers who parked their cars in this garage yesterday.
 * You should enter the hours parked for each customer. Your program should
 * print the results in a tabular format, and should calculate and print the total of yesterday's
 * receipts. The program should use the function calculateCharges to determine
 * the charge for each customer. Your outputs should appear in the following format:
 * 
 *      Car   Hours Charge
 *      1     1.5   2.00
 *      2     4.0   2.50
 *      3     24.0  10.00
 *      TOTAL 29.5  14.50
 */

#include <stdio.h>
#include <math.h>

double calculateCharges(double);

int main(void)
{
    double car1, car2, car3;

    printf("Enter the hours parked for 3 cars: ");
    scanf("%lf %lf %lf", &car1, &car2, &car3);
    printf("Car\tHours\tCharge\n");

    printf("%d\t%.2lf\t%.2lf\n", 1, car1, calculateCharges(car1));
    printf("%d\t%.2lf\t%.2lf\n", 2, car2, calculateCharges(car2));
    printf("%d\t%.2lf\t%.2lf\n", 3, car3, calculateCharges(car3));
    printf("%s\t%.2lf\t%.2lf\n", "TOTAL", car1 + car2 + car3, calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3));

}

double calculateCharges(double hours)
{
    if (hours < 3.0)
    {
        return 2.0;
    }
    else if (hours < 19)
    {
        return 2.0 + 0.5 * ceil(hours - 3.0);
    }
    else
    {
        return 10.0;
    }
}
