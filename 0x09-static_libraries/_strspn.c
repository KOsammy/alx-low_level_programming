#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the prefix to measure against
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p, *a;
	unsigned int count = 0;

	for (p = s; *p; ++p)
	{
		for (a = accept; *a; ++a)
		{
			if (*p == *a)
				break;
		}
		if (*a == '\0')
			return (count);
		++count;
	}
	return (count);
}

