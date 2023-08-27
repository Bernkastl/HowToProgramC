/*
 * 4.26 (Calculating the Value of π) Calculate the value of π from the infinite series:
 * π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
 * Print a table that shows the value of π approximated by one term of this series, by
 * two terms, by three terms, and so on. How many terms of this series do you have to
 * use before you first get 3.14? 3.141? 3.1415? 3.14159?
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int terms = 400000;
    int n = 1;
    int term = 1;
    float sum = 0;
    bool isPositive = true;

    // 3.14 needs  3.141? 3.1415? 3.14159?

    printf("terms\tPi\n");
    while (term <= terms)
    {
        if (isPositive)
        {
            sum += 4.0 / n;
        }
        else
        {
            sum -= 4.0 / n;
        }

        isPositive = !isPositive;
        printf("%d\t%f\n", term, sum);
        n += 2;
        term++;
    }

    return 0;
}
