/*
 * 4.28 (Calculating Weekly Pay) A company pays its employees as managers (who receive
 * a fixed weekly salary), hourly workers (who receive a fixed hourly wage for up to
 * the first 40 hours they work and “time-and-a-half” for overtime hours worked), commission
 * workers (who receive $250 plus 5.7% of their gross weekly sales), or pieceworkers
 * (who receive a fixed amount of money for each of the items they produce—
 * each pieceworker in this company works on only one type of item). Write a program
 * to compute each employee’s weekly pay. You do not know the number of employees
 * in advance. Each type of employee has a pay code: Managers have paycode 1, hourly
 * workers have code 2, commission workers have code 3 and pieceworkers have code 4.
 * Use a switch to compute each employee’s pay based on the paycode. Within the
 * switch, prompt the user to enter the appropriate facts your program needs to calculate
 * each employee’s pay based on that employee’s paycode. [Note: You can input values of
 * type double using the conversion specification %lf with scanf.]
 */

#include <stdio.h>

int main(void)
{
    int payCode;
    double salary;
    printf("Enter paycode (-1 to terminate): ");
    scanf("%d", &payCode);

    while (payCode > 0)
    {
        switch (payCode)
        {
        case 1:
            printf("Manager\n");
            printf("Enter salary: ");
            scanf("%lf", &salary);

            printf("The manager's pay is: $%.2lf\n", salary);
            break;

        case 2:
            int hours;
            double salaryPerHour;

            printf("Hourly Worker\n");

            printf("Enter the hourly salary: ");
            scanf("%lf", &salaryPerHour);

            printf("Enter the number of hours worked: ");
            scanf("%d", &hours);

            if (hours <= 40)
            {
                salary = salaryPerHour * hours;
            }
            else
            {
                salary = (salaryPerHour * 40) + ((hours - 40) * salaryPerHour * 1.5);
            }

            printf("The hourly workers's pay is: $%.2lf\n", salary);
            break;

        case 3:
            double weeklySales;

            printf("Commission Worker\n");

            printf("Enter gross weekly sales: ");
            scanf("%lf", &weeklySales);

            salary = 250 + 0.057 * weeklySales;

            printf("The commission workers's pay is: $%.2f\n", salary);
            break;

        case 4:
            int pieces;
            double wagePerPiece;

            printf("Piece Worker\n");

            printf("Enter the number of worked pieces: ");
            scanf("%d", &pieces);

            printf("Enter the wager per piece: ");
            scanf("%lf", &wagePerPiece);

            salary = wagePerPiece * pieces;

            printf("The piece workers's pay is: $%.2f\n", salary);
            break;

        default:
            printf("Incorrect paycode (Please use 1-4 or -1 to terminate).\n");
            continue;
        }

        printf("Enter paycode (-1 to terminate): ");
        scanf("%d", &payCode);
    }

    return 0;
}
