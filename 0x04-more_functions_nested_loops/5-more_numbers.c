#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 */
void more_numbers(void)
{
	int i, j;
	char digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				digit = j + '0';
			}
			else
			{
				digit = '1';
				_putchar('1');
				digit = j % 10 + '0';
			}
			_putchar(digit);
		}
		_putchar('\n');
	}
}

