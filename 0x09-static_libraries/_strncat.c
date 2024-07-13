#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes from src to use
 *
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d)
		d++;
	while (n-- && (*d++ = *src++))
		;
	*d = '\0';
	return (dest);
}

