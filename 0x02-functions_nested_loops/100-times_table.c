#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times tables to print
 *
 * Description: If n is greater than 15 or less than 0, the function
 * does not print anything. Prints each row of the times table in a
 * specified format.
 */
void print_times_table(int n)
{
    int i, j;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;

            if (j == 0)
                _putchar('0' + result);
            else
            {
                _putchar(',');
                _putchar(' ');
                if (result >= 100)
                    _putchar('0' + result / 100);
                else
                    _putchar(' ');
                if (result >= 10)
                    _putchar('0' + (result / 10) % 10);
                else
                    _putchar(' ');
                _putchar('0' + result % 10);
            }
        }
        _putchar('\n');
    }
}

