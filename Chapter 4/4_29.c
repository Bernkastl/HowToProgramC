/*
 * 4.29 (De Morgan’s Laws) We discussed the logical operators &&, ||, and !. De Morgan’s
 * Laws help express logical expressions more conveniently. These laws state that the
 * expression !(condition1 && condition2) is logically equivalent to the expression (!condition1
 * || !condition2). Also, the expression !(condition1 || condition2) is logically
 * equivalent to the expression (!condition1 && !condition2). Use De Morgan’s Laws to
 * write equivalent expressions for each of the following, and then write a program to show
 * that both the original expression and the new expression in each case are equivalent.
 *      a) !(x < 5) && !(y >= 7)
 *      b) !(a == b) || !(g != 5)
 *      c) !((x <= 8) && (y > 4))
 *      d) !((i > 4) || (j <= 6))
 */

#include <stdio.h>

int main(void)
{
    int x = 1, y = 2, a = 3, b = 4, g = 5, i = 6, j = 7;

    printf("!(x < 5) && !(y >= 7) result is: %d\n", !(x < 5) && !(y >= 7));
    printf("Using De Morgan's law !((x < 5) || (y >= 7)) the result is: %d\n", !((x < 5) || (y >= 7)));

    puts("");

    printf("!(a == b) || !(g != 5) the result is: %d\n", !(a == b) || !(g != 5));
    printf("Using De Morgan's law !((a == b) && (g != 5)) the result is: %d\n", !((a == b) && (g != 5)));

    puts("");

    printf("!((x <= 8) && (y > 4)) the result is: %d\n", !((x <= 8) && (y > 4)));
    printf("Using De Morgan's law !(a == b) || !(g != 5) the result is: %d\n", !(a == b) || !(g != 5));

    puts("");

    printf("!((i > 4) || (j <= 6)) the result is: %d\n", !((i > 4) || (j <= 6)));
    printf("Using De Morgan's law !(i > 4) && !(j <= 6) the result is: %d\n", !(i > 4) && !(j <= 6));

    return 0;
}
