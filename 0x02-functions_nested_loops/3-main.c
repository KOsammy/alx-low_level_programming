#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');  /* Output: 0 (since 'H' is not lowercase) */
	
	r = _islower('o');
	_putchar(r + '0');  /* Output: 1 (since 'o' is lowercase) */
	
	r = _islower(108);   /* ASCII value for 'l' */
	_putchar(r + '0');  /* Output: 1 (since 'l' is lowercase) */

	_putchar('\n');
	return (0);
}

