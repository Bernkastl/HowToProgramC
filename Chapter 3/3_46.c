/*
 * 3.46 (World Population Growth) World population has grown considerably over
 * the centuries. Continued growth could eventually challenge the limits of breathable
 * air, drinkable water, arable land and other limited resources. There’s evidence that
 * growth has been slowing in recent years, and that world population could peak some
 * time this century, then start to decline.
 * For this exercise, research world population growth issues. This is a controversial
 * topic, so be sure to investigate various viewpoints. Get estimates for the current
 * world population and its growth rate. Write a program that calculates world population
 * growth each year for the next 100 years, using the simplifying assumption that the
 * current growth rate will stay constant. Print the results in a table. The first column
 * should display the year from 1 to 100. The second column should display the anticipated
 * world population at the end of that year. The third column should display the
 * numerical increase in the world population that would occur that year. Using your
 * results, determine the years in which the population would become double and
 * eventually quadruple what it is today.
 */

#include <stdio.h>

int main(void)
{
    // Data obtained from https://databank.worldbank.org/source/population-estimates-and-projections
    int currentYear = 2023;
    long long currentPopulation = 8021409331;
    float annualGrowth = 0.009;

    printf("%s", "Year\tPopulation\n");
    printf("%s", "------------------\n");
    int year = 0;
    while(year <= 100)
    {
        printf("%d\t%lld\n", currentYear + year, currentPopulation);
        currentPopulation = currentPopulation + annualGrowth * currentPopulation;
        year++;
    }

    return 0;
}
