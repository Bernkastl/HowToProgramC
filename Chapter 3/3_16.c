/*
 * 3.16 (Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles.
 * One driver has kept track of several tankfuls of gasoline by recording miles
 * driven and gallons used for each tankful. Develop a program that uses scanf to input
 * the miles driven and gallons used for each tankful. The program should calculate and
 * display the miles per gallon obtained for each tankful. After processing all input information,
 * the program should calculate and print the combined miles per gallon obtained
 * for all tankfuls. Here is a sample input/output dialog:
 *
 *      Enter the gallons used (-1 to end): 12.8
 *      Enter the miles driven: 287
 *      The miles/gallon for this tank was 22.421875
 *      Enter the gallons used (-1 to end): 10.3
 *      Enter the miles driven: 200
 *      The miles/gallon for this tank was 19.417475
 *      Enter the gallons used (-1 to end): 5
 *      Enter the miles driven: 120
 *      The miles/gallon for this tank was 24.000000
 *      Enter the gallons used (-1 to end): -1
 *      The overall average miles/gallon was 21.601423
 */

#include <stdio.h>

int main(void)
{
    printf("Enter the gallons used (-1 to end): ");
    float gallons;
    scanf("%f", &gallons);

    float miles, milesPerGallon, totalMiles = 0.0, totalGallons = 0.0;
    
    while (gallons != -1)
    {
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        milesPerGallon = miles / gallons;
        printf("The miles/gallon for this tank was %f\n", milesPerGallon);

        totalMiles += miles;
        totalGallons += gallons;

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
    }

    if (totalGallons > 0)
    {
        printf("The overall average miles/gallon was %f", totalMiles / totalGallons);
    }
    else
    {
        printf("%s", "No data was entered.");
    }

    return 0;
}
