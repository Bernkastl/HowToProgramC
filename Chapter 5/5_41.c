/*
 * 5.41 (Distance Between Points) Write a function distance that calculates the distance
 * between two points (x1, y1) and (x2, y2). All numbers and return values should
 * be of type double.
 */

#include <stdio.h>
#include <math.h>

double calculateDistance(double, double, double, double);

int main(void)
{
    double x1, y1, x2, y2;

    printf("Enter the (x, y) coorinates of the first point: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the (x, y) coorinates of the second point: ");
    scanf("%lf %lf", &x2, &y2);

    printf("The distance between them is %.2lf", calculateDistance(x1, y1, x2, y2));
}

double calculateDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
