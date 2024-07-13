#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*ptr++ = b;
	return (s);
}

