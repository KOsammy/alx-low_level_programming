#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the duplicated string */
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];
	dup_str[len] = '\0';  /* Null-terminate the duplicated string */

	return (dup_str);
}

