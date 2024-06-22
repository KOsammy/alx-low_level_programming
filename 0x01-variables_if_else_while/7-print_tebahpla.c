#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line. Uses putchar twice only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z'; /* Start with the last lowercase letter */

	while (ch >= 'a')
	{
		putchar(ch);
		ch--; /* Decrement to print the next character in reverse */
	}

	putchar('\n'); /* Print the newline character */
	return (0);
}

