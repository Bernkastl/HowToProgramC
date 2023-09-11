/*
 * 6.10 (Sales Commissions) Use a one-dimensional array to solve the following problem.
 * A company pays its salespeople on a commission basis. The salespeople receive
 * $200 per week plus 9% of their gross sales for that week. For example, a salesperson
 * who grosses $3000 in sales in a week receives $200 plus 9% of $3000 for a total of
 * $470. Write a C program (using an array of counters) that determines how many
 * salespeople earned salaries in each of the following ranges—assume that each salesperson’s
 * salary is truncated to an integer amount:
 * a) $200–299
 * b) $300–399
 * c) $400–499
 * d) $500–599
 * e) $600–699
 * f) $700–799
 * g) $800–899
 * h) $900–999
 * i) $1000 and over
 */

#include <stdio.h>

int main(void)
{
    int salary_range[9] = {0};
    int sales;

    printf("Enter employee gross sales ( -1 to end ): ");
    scanf("%d", &sales);

    while (sales != -1)
    {
        double salary = 200 + sales * 0.09;

        printf("Employee comission: $%.2lf\n", salary);

        if (salary < 300)
        {
            salary_range[0]++;
        }
        else if (salary < 400)
        {
            salary_range[1]++;
        }
        else if (salary < 500)
        {
            salary_range[2]++;
        }
        else if (salary < 600)
        {
            salary_range[3]++;
        }
        else if (salary < 700)
        {
            salary_range[4]++;
        }
        else if (salary < 800)
        {
            salary_range[5]++;
        }
        else if (salary < 900)
        {
            salary_range[6]++;
        }
        else if (salary < 1000)
        {
            salary_range[7]++;
        }
        else
        {
            salary_range[8]++;
        }

        printf("Enter employee gross sales ( -1 to end ): ");
        scanf("%d", &sales);
    }

    printf("\nSalary Ranges\n");

    printf("$200-$299 : %d\n", salary_range[0]);
    printf("$300-$399 : %d\n", salary_range[1]);
    printf("$400-$499 : %d\n", salary_range[2]);
    printf("$500-$599 : %d\n", salary_range[3]);

    printf("$600-$699 : %d\n", salary_range[4]);
    printf("$700-$799 : %d\n", salary_range[5]);
    printf("$800-$899 : %d\n", salary_range[6]);
    printf("$900-$999 : %d\n", salary_range[7]);

    printf("$1000 and over : %d\n", salary_range[8]);
}
