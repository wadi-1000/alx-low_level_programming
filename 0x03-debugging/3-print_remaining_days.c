#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/



void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            if (n == 98)
            {
                printf("%d\n", n);
                break;
            }
            else
            {
                printf("%d, ", n);
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            if (n == 98)
            {
                printf("%d\n", n);
                break;
            }
            else
            {
                printf("%d, ", n);
            }
        }
    }
}
