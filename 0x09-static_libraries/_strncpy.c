#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the buffer to copy to
 * @src: the string to copy
 * @n: the number of bytes to copy
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;

	while (n-- && (*d++ = *src++))
		;
	while (n-- > 0)
		*d++ = '\0';
	return (dest);
}

