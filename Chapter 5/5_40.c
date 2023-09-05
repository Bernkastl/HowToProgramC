/*
 * 5.40 (Recursive main) Can main be called recursively? Write a program containing a
 * function main. Include static local variable count initialized to 1. Postincrement and
 * print the value of count each time main is called. Run your program. What happens?
 */

#include <stdio.h>

int main(void)
{
    static int counter = 1;
    
    printf("%d\n", counter);
    counter++;

    main();
}
