/*
 * 6.22 (Total Sales) Use a two-dimensional array to solve the following problem. A
 * company has four salespeople (1 to 4) who sell five different products (1 to 5). Once
 * a day, each salesperson passes in a slip for each different type of product sold. Each
 * slip contains:
 * a) The salesperson number
 * b) The product number
 * c) The total dollar value of that product sold that day
 * Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the
 * information from all of the slips for last month is available. Write a program that
 * reads all this sales information and summarizes the total sales by salesperson by product.
 * All totals should be stored in the two-dimensional array sales. After processing
 * all the information for last month, print the results in tabular format with each column
 * representing a particular salesperson and each row representing a particular
 * product. Cross-total each row to get the total sales of each product for last month;
 * cross total each column to get the total sales by salesperson for last month. Your tabular
 * printout should include these cross totals to the right of the totaled rows and to
 * the bottom of the totaled columns.
 */

#include <stdio.h>

#define EMPLOYEE_NUM 4
#define PRODUCT_NUM 5

int main(void)
{
    float sales[PRODUCT_NUM][EMPLOYEE_NUM] = {0};

    for (size_t i = 0; i < PRODUCT_NUM; i++)
    {
        printf("Product #%zu\n", i + 1);
        for (size_t j = 0; j < EMPLOYEE_NUM; j++)
        {
            printf("Sales of employee #%zu: ", j + 1);
            scanf("%f", &sales[i][j]);
        }
    }

    printf("X\t\tEmployee #1\tEmployee #2\tEmployee #3\tEmployee #4\tTotal\n");
    for (size_t i = 0; i < PRODUCT_NUM; i++)
    {
        float total = 0.0;
        printf("Product #%zu\t", i + 1);
        for (size_t j = 0; j < EMPLOYEE_NUM; j++)
        {
            total += sales[i][j];
            printf("%-11.2f\t", sales[i][j]);
        }
        printf("%-11.2f\n", total);
    }

    printf("Total\t\t");
    for (size_t i = 0; i < EMPLOYEE_NUM; i++)
    {
        float total = 0.0;

        for (size_t j = 0; j < PRODUCT_NUM; j++)
        {
           total += sales[j][i];
        }
        printf("%-11.2f\t", total);
    }
}
