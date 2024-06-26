#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @x: starting number
 *
 * Return: void
 */
void print_to_98(int x)
{
    int i;

    if (x <= 98)
    {
        for (i = x; i <= 98; i++)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        for (i = x; i >= 98; i--)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}

