/*
 * 2.28 (Target Heart-Rate Calculator) While exercising, you can use a heart-rate
 * monitor to see that your heart rate stays within a safe range suggested by your doctors
 * and trainers. According to the American Heart Association (AHA) (http://bit.ly/
 * AHATargetHeartRates), the formula for calculating your maximum heart rate in beats
 * per minute is 220 minus your age in years. Your target heart rate is 50–85% of your
 * maximum heart rate. Write a program that prompts for and inputs the user’s age and
 * calculates and displays the user’s maximum heart rate and the range of the user’s target
 * heart rate. [These formulas are estimates provided by the AHA; maximum and
 * target heart rates may vary based on the health, fitness and gender of the individual.
 * Always consult a physician or qualified healthcare professional before beginning or
 * modifying an exercise program.]
 */

#include <stdio.h>

int main(void)
{
    printf("Enter your age: ");

    int age;
    scanf("%d", &age);

    int maximumHeartRate = 220 - age;
    float minRange = maximumHeartRate * 0.50;
    float maxRange = maximumHeartRate * 0.85;

    printf("Maximum Heart Rate: %d\n", maximumHeartRate);
    // %.2f means a floating point number with 2 digits after the decimal point
    printf("Target heart rate is between %.2f-%.2f\n", minRange, maxRange);

    return 0;
}
