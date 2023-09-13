/*
 * 6.11 (Bubble Sort) The bubble sort presented in Fig. 6.12 is inefficient for large arrays.
 * Make the following modifications to improve its performance:
 * a) After the first pass, the largest number is guaranteed to be in the highestnumbered
 * array element; after the second pass, the two highest numbers are
 * “in place,” and so on. Instead of making nine comparisons on every pass,
 * modify the bubble sort to make eight comparisons on the second pass, seven
 * on the third pass and so on.
 * b) The data in the array may already be in the proper or near-proper order, so
 * why make nine passes if fewer will suffice? Modify the sort to check at the
 * end of each pass whether any swaps have been made. If there were none,
 * then the data must already be in the proper order, so the sort should terminate.
 * If swaps have been made, then at least one more pass is needed.
 */

#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    for (int pass = 1; pass < SIZE; ++pass)
    {
        bool swap = false;
        for (size_t i = 0; i < SIZE - pass; ++i)
        {
            if (a[i] > a[i + 1])
            {
                swap = true;
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }

        if (!swap)
            break;
    }

    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    puts("");
}
