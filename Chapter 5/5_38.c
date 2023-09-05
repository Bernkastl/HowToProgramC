/*
 * 5.38 (Visualizing Recursion) It’s interesting to watch recursion “in action.” Modify
 * the factorial function of Fig. 5.9 to print its local variable and recursive call parameter.
 * For each recursive call, display the outputs on a separate line and add a level of
 * indentation. Do your utmost to make the outputs clear, interesting and meaningful.
 * Your goal here is to design and implement an output format that helps a person understand
 * recursion better. You may want to add such display capabilities to the many
 * other recursion examples and exercises throughout the text.
 */

#include <stdio.h>

unsigned long long int factorial(int, int);

int main(void)
{
    // calculate factorial(i) and display result
    for (int i = 0; i <= 21; ++i)
    {
        printf("%d! = %llu\n", i, factorial(i, 0));
    }
}

// recursive definition of function factorial
unsigned long long int factorial(int number, int depth)
{
    for (int i = 0; i < depth; ++i)
    {
        printf("  "); // Add indentation for readability
    }
    printf("Calling factorial(%d) at depth %d\n", number, depth);

    if (number <= 1)
    { // base case
        for (int i = 0; i < depth; ++i)
        {
            printf("  "); // Add indentation for readability
        }
        printf("Factorial(%d) base case reached, returning 1\n", number);
        return 1;
    }
    else
    { // recursive step
        unsigned long long int result = number * factorial(number - 1, depth + 1);

        for (int i = 0; i < depth; ++i)
        {
            printf("  "); // Add indentation for readability
        }
        printf("Factorial(%d) at depth %d returning %llu\n", number, depth, result);
        return result;
    }
}
