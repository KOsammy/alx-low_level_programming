#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int length = 0, i;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting point for the second half */
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2 + 1;
	}

	/* Print the second half of the string */
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

