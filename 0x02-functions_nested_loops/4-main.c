#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');  /* Output: 1 (since 'H' is a letter) */
	
	r = _isalpha('o');
	_putchar(r + '0');  /* Output: 1 (since 'o' is a letter) */
	
	r = _isalpha(108);   /* ASCII value for 'l' */
	_putchar(r + '0');  /* Output: 1 (since 'l' is a letter) */

	r = _isalpha(';');
	_putchar(r + '0');  /* Output: 0 (since ';' is not a letter) */

	_putchar('\n');
	return (0);
}

