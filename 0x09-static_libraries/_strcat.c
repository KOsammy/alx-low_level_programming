#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d)
		d++;
	while ((*d++ = *src++))
		;
	return (dest);
}

