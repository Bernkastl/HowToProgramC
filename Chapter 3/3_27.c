/*
 * 3.27 (Validating User Input) Modify the program in Figure 3.6 to validate its inputs.
 * For each input, if the value is other than 1 or 2, keep looping until the user enters
 * a correct value.
 */

#include <stdio.h>

int main(void)
{
    int passes = 0;
    int failures = 0;
    int student = 1;

    while (student <= 10)
    {
        printf("%s", "Enter result (1=pass,2=fail): ");
        int result = 0;
        scanf("%d", &result);

        if (result == 1)
        {
            passes = passes + 1;
        }
        else if (result == 2)
        {
            failures = failures + 1;
        }
        else
        {
            printf("%s", "Incorrect result please use either 1 or 2\n");
            continue;
        }

        student = student + 1;
    }

    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

    if (passes > 8)
    {
        puts("Bonus to instructor!");
    }
}
