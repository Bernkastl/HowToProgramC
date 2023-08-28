/*
 * 4.40 (World Population Growth) World population has grown considerably over
 * the centuries. Continued growth could eventually challenge the limits of breathable
 * air, drinkable water, arable cropland and other limited resources. There’s evidence
 * that growth has been slowing in recent years and that world population could peak
 * sometime this century, then start to decline.
 * For this exercise, research world population growth issues online. Be sure to investigate
 * various viewpoints. Get estimates for the current world population and its
 * growth rate (the percentage by which it’s likely to increase this year). Write a program
 * that calculates world population growth each year for the next 75 years, using
 * the simplifying assumption that the current growth rate will stay constant. Print the
 * results in a table. The first column should display the year from year 1 to year 75.
 * The second column should display the anticipated world population at the end of
 * that year. The third column should display the numerical increase in the world population
 * that would occur that year. Using your results, determine the year in which
 * the population would be double what it is today if this year’s growth rate were to
 * persist.
 */

#include <stdio.h>

int main(void)
{
    // Data obtained from https://databank.worldbank.org/source/population-estimates-and-projections
    int currentYear = 2023;
    long long currentPopulation = 8021409331;
    float annualGrowth = 0.009;

    printf("%s", "Year\tPopulation\tIncrease\n");
    printf("%s", "--------------------------------\n");

    for (int i = 1; i <= 75; i++)
    {
        long long population = currentPopulation * (1 + annualGrowth);
        long long difference = population - currentPopulation;

        printf("%d\t%lld\t%lld\n", i, population, difference);
        currentPopulation = population;
    }

    return 0;
}
