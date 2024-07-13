#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte
 * @dest: the buffer to copy to
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while ((*d++ = *src++))
		;
	return (dest);
}

