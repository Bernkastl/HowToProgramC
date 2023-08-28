/*
 * 4.39 (Limitations of Floating-Point Numbers for Monetary Amounts) Section 4.5
 * cautioned about using floating-point values for monetary calculations. Try this experiment:
 * Create a float variable with the value 1000000.00. Next, add to that variable
 * the literal float value 0.12f. Display the result using printf and the conversion specification
 * "%.2f". What do you get?
 */

#include <stdio.h>

int main(void)
{
    float number = 1000000.00;

    printf("%.2f", number + 0.12f);
}
