/*
 * 4.27 (Pythagorean Triples) A right triangle can have sides that are all integers. The
 * set of three integer values for a right triangle’s sides is a Pythagorean triple. These three
 * sides must satisfy the relationship that the sum of the sides’ squares is equal to the hypotenuse’s
 * square. Find all Pythagorean triples for side1, side2, and the hypotenuse, all
 * no larger than 500. Use a triple-nested for loop that tries all possibilities. This is an
 * example of “brute-force” computing. It’s not aesthetically pleasing to many people.
 * But there are many reasons why this technique is important. First, with computing
 * power increasing at such a phenomenal pace, solutions that would have taken years or
 * even centuries of computer time to produce with the technology of just a few years ago
 * can now be produced in hours, minutes, seconds or even less. Second, there are large
 * numbers of interesting problems for which there’s no known algorithmic approach
 * other than sheer brute force. We investigate many problem-solving methodologies in
 * this book. We’ll consider brute-force approaches to various interesting problems.
 */

#include <stdio.h>

int main(void)
{
    const int limit = 500;
    int count = 0;

    for (int side1 = 1; side1 <= limit; side1++)
    {
        for (int side2 = 1; side2 <= limit; side2++)
        {
            for (int side3 = 1; side3 <= limit; side3++)
            {
                if (side3 * side3 == side1 * side1 + side2 * side2)
                {
                    printf("%d %d %d\n", side1, side2, side3);
                    count++;
                }
            }
        }
    }

    printf("Right triangle triples found: %d", count);

    return 0;
}
