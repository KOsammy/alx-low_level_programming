#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @g: the number whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int g)
{
	int last_digit = g % 10;

	if (last_digit < 0) /* handle negative numbers */
		last_digit = -last_digit;

	_putchar('0' + last_digit);
	return (last_digit);
}

