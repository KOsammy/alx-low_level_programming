#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer in a specified format
 * @b: Pointer to the buffer to print
 * @size: Number of bytes to print from the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i); /* Print starting address in hexadecimal */

		/* Print hex representation of 10 bytes per line*/
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  "); /* Spaces for incomplete lines*/
			if (j % 2 != 0)
				printf(" "); /* Separate bytes with a space after every 2 hex digits*/
		}

		/* Print the buffer content with printable characters or '.'*/
		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}

		printf("\n");
	}
}

