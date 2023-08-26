/*
 * 4.22 (Average Grade) Modify the program of Fig. 4.5 so that it calculates the average
 * grade for the class.
 */

#include <stdio.h>

int main(void)
{
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade = 0; // one grade
    int totalGrades = 0;

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF)
    {
        // determine which grade was input
        switch (grade)
        {         // switch nested in while
        case 'A': // grade was uppercase A
        case 'a': // or lowercase a
            ++aCount;
            totalGrades += 4;
            break; // necessary to exit switch
        case 'B':  // grade was uppercase B
        case 'b':  // or lowercase b
            ++bCount;
            totalGrades += 3;
            break;
        case 'C': // grade was uppercase C
        case 'c': // or lowercase c
            ++cCount;
            totalGrades += 2;
            break;
        case 'D': // grade was uppercase D
        case 'd': // or lowercase d
            ++dCount;
            totalGrades += 1;
            break;
        case 'F': // grade was uppercase F
        case 'f': // or lowercase f
            ++fCount;
            totalGrades += 0;
            break;
        case '\n': // ignore newlines,
        case '\t': // tabs,
        case ' ':  // and spaces in input
            break;
        default: // catch all other characters
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            break; // optional; will exit switch anyway
        }          // end switch
    }              // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    int totalCount = aCount + bCount + cCount + dCount + fCount;
    float average = (float)totalGrades / totalCount;

    if (average > 3.4)
    {
        printf("Average grade is A\n");
    }
    else if (average > 2.4)
    {
        printf("Average grade is B\n");
    }
    else if (average > 1.4)
    {
        printf("Average grade is C\n");
    }
    else if (average > 0.4)
    {
        printf("Average grade is D\n");
    }

    return 0;
}
