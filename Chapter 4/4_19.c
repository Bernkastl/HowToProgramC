/*
 * 4.19 (Calculating Sales) An online retailer sells five different products whose retail
 * prices are shown in the following table:
 *
 * Product number Retail price
 * 1              $2.98
 * 2              $4.50
 * 3              $9.98
 * 4              $4.49
 * 5              $6.87
 *
 * Write a program that reads a series of pairs of numbers as follows:
 *         a) Product number.
 *         b) Quantity sold for one day.
 * Your program should use a switch statement to help determine the retail price for
 * each product. Your program should calculate and display the total retail value of all
 * products sold last week.
 */

#include <stdio.h>

int main(void)
{
    int productNumber, quantitySold;
    float retailPrice, totalSales;

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter product number and the quantity sold: ");
        scanf("%d %d", &productNumber, &quantitySold);
        switch (productNumber)
        {
        case 1:
            totalSales += quantitySold * 2.98;
            break;

        case 2:
            totalSales += quantitySold * 4.50;
            break;

        case 3:
            totalSales += quantitySold * 9.98;
            break;

        case 4:
            totalSales += quantitySold * 4.49;
            break;

        case 5:
            totalSales += quantitySold * 6.87;
            break;

        default:
            break;
        }
    }

    printf("Total sales: $%.2f", totalSales);

    return 0;
}
