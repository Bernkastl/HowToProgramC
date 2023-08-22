/*
 * 3.36 (How Fast Is Your Computer?) How can you determine how fast your own computer
 * operates? Write a program with a while loop that counts from 1 to 1,000,000,000,
 * incrementing by 1 during each iteration of the loop. Every time the count reaches a multiple
 * of 100,000,000, print that number on the screen. Use your watch to time how long
 * each 100 million iterations of the loop takes. [Hint: Use the remainder operator to recognize
 * each time the counter reaches a multiple of 100,000,000.]
 */

#include <stdio.h>

int main(void)
{
    int count = 1;
    while (count <= 1000000000)
    {
        if (count % 100000000 == 0)
        {
            printf("%d\n", count);
        }
        count++;
    }
    return 0;
}
