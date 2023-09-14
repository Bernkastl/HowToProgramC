/*
 * 6.14 (Mean, Median and Mode Program Modifications) Modify the program of
 * Fig. 6.13 so function mode can handle a tie for the mode value. If there are two values
 * with the same frequency, the data is “bimodal” and both values should be displayed.
 * If there are more than two values with the same frequency, the data is “multimodal”
 * and all the values with the same frequency should be displayed. Also modify the median
 * function to average the two middle elements in an array with an even number
 * of elements.
 */

#include <stdio.h>
#define SIZE 99

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main(void)
{
    int frequency[10] = {0};

    int response[SIZE] =
        {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
         7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
         6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
         7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
         4, 5, 6, 1, 6, 5, 7, 8, 7};

    mean(response);
    median(response);
    mode(frequency, response);
}

void mean(const int answer[])
{
    printf("%s\n%s\n%s\n", "--------", "  Mean", "--------");

    int total = 0;

    for (size_t j = 0; j < SIZE; ++j)
    {
        total += answer[j];
    }

    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data items divided by the number\n"
           "of data items (%u). The mean value for\n"
           "this run is: %u / %u = %.4f\n\n",
           SIZE, total, SIZE, (double)total / SIZE);
}

void median(int answer[])
{
    printf("\n%s\n%s\n%s\n%s", "--------", " Median", "--------",
           "The unsorted array of responses is");

    printArray(answer);

    bubbleSort(answer);

    printf("%s", "\n\nThe sorted array is");
    printArray(answer);

    size_t leftMedianIndex = (SIZE - 1) / 2;
    size_t rightMedianIndex = leftMedianIndex + 1;

    double medianValue = (answer[leftMedianIndex] + answer[rightMedianIndex]) / 2.0;

    printf("\n\nThe median is the average of elements %zu and %zu of\n"
           "the sorted %u element array.\n"
           "For this run, the median is %.2lf\n\n",
           leftMedianIndex, rightMedianIndex, SIZE, medianValue);
}

void mode(int freq[], const int answer[])
{
    printf("\n%s\n%s\n%s\n", "--------", "  Mode", "--------");

    for (size_t rating = 1; rating <= 9; ++rating)
    {
        freq[rating] = 0;
    }

    for (size_t j = 0; j < SIZE; ++j)
    {
        ++freq[answer[j]];
    }

    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response", "Frequency", "Bar Chart",
           "1    1    2    2", "5    0    5    0    5");

    int largest = 0;
    int countOfLargest = 0;
    int modeValues[10] = {0};

    for (size_t rating = 1; rating <= 9; ++rating)
    {
        printf("%8zu%11d          ", rating, freq[rating]);

        if (freq[rating] > largest)
        {
            largest = freq[rating];
            modeValues[0] = rating;
            countOfLargest = 1;
        }
        else if (freq[rating] == largest)
        {
            modeValues[countOfLargest] = rating;
            countOfLargest++;
        }

        for (int h = 1; h <= freq[rating]; ++h)
        {
            printf("%s", "*");
        }

        puts("");
    }

    printf("\nThe mode is the most frequent value(s).\n"
           "For this run, the mode value(s) is/are:");

    for (int i = 0; i < countOfLargest; ++i)
    {
        printf(" %d", modeValues[i]);
    }
    printf(" which occurred %d times each.\n", largest);
}

void bubbleSort(int a[])
{
    for (int pass = 1; pass < SIZE; ++pass)
    {
        for (size_t j = 0; j < SIZE - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}

void printArray(const int a[])
{
    for (size_t j = 0; j < SIZE; ++j)
    {

        if (j % 20 == 0)
        {
            puts("");
        }

        printf("%2d", a[j]);
    }
}
