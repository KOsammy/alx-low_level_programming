#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to encode
 *
 * Return: A pointer to the modified string str
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_alpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*ptr != '\0')
	{
		i = 0;
		while (alphabet[i] != '\0')
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rot13_alpha[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}

