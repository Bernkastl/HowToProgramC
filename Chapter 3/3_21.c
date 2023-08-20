/*
 * 3.21 (Predecrementing vs. Postdecrementing) Write a program that demonstrates
 * the difference between predecrementing and postdecrementing using the decrement
 * operator --.
 */

#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 5;

    printf("The value of A while doing postdecrementing: %d\n", a--);
    printf("The value of A while doing predecrementing: %d\n", --b);

    printf("The value of A after postdecrementing: %d\n", a);
    printf("The value of A after predecrementing: %d\n", a);

    return 0;
}
