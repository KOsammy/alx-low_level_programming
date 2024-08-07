#include "main.h"

/**
 * _strncat - Concatenates two strings,
 * using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append the source string to the destination string */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}

