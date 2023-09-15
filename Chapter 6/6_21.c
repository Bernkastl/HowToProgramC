/*
 * 6.21 (Airline Reservations System) A small airline has just purchased a computer for
 * its new automated reservations system. The president has asked you to program the
 * new system. You’ll write a program to assign seats on each flight of the airline’s only
 * plane (capacity: 10 seats).
 * Your program should display the following menu of alternatives:
 * Please type 1 for "first class"
 * Please type 2 for "economy"
 * If the person types 1, assign a seat in the first-class section (seats 1–5). If the person
 * types 2, assign a seat in the economy section (seats 6–10). Your program should then
 * print a boarding pass indicating the person's seat number and whether it’s in the firstclass
 * or economy section of the plane.
 * Use a one-dimensional array to represent the plane’s seating chart. Initialize all
 * the elements of the array to 0 to indicate that all seats are empty. As each seat is
 * assigned, set the corresponding element of the array to 1 to indicate that the seat is
 * no longer available.
 * Your program should, of course, never assign a seat that has already been assigned.
 * When the first-class section is full, your program should ask the person if it’s acceptable
 * to be placed in the economy section (and vice versa). If yes, then make the appropriate
 * seat assignment. If no, then print the message, "Next flight leaves in 3 hours."
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX_CAPACITY 10

enum Class
{
    ECONOMY,
    FIRST_CLASS
};

bool assignSeat(enum Class, int[]);

int main(void)
{
    int choice;
    char class_choice;
    int seats[MAX_CAPACITY] = {0};

    while (1)
    {
        bool sucess = false;

        printf("Please type 1 for \"first class\"\n");
        printf("Please type 2 for \"economy\"\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sucess = assignSeat(FIRST_CLASS, seats);
            if (!sucess)
            {
                printf("First class is full, would you like a seat in economy class? (y/n): ");
                scanf(" %c", &class_choice);
                if (class_choice == 'y' || class_choice == 'Y')
                {
                    assignSeat(ECONOMY, seats);
                }
                else
                {
                    printf("Next flight leaves in 3 hours.\n");
                }
            }
            break;

        case 2:
            sucess = assignSeat(ECONOMY, seats);
            if (!sucess)
            {
                printf("Economy class is full, would you like a seat in First class? (y/n): ");
                scanf(" %c", &class_choice);
                if (class_choice == 'y' || class_choice == 'Y')
                {
                    assignSeat(FIRST_CLASS, seats);
                }
            }
            else
            {
                printf("Next flight leaves in 3 hours.\n");
            }
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}

bool assignSeat(enum Class class, int seats[])
{
    switch (class)
    {
    case FIRST_CLASS:
        for (size_t i = 0; i < 5; i++)
        {
            if (seats[i] == 0)
            {
                seats[i] = 1;
                printf("Reserved Seat #%d in First Class\n", i + 1);
                return true;
            }
        }
        return false;

    case ECONOMY:
        for (size_t i = 5; i < MAX_CAPACITY; i++)
        {
            if (seats[i] == 0)
            {
                seats[i] = 1;
                printf("Reserved Seat #%d in Economy Class\n", i + 1);
                return true;
            }
        }
        return false;

    default:
        return false;
        break;
    }
}
