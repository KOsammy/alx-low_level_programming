#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the modified string str
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;

	while (*ptr != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replace[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}

