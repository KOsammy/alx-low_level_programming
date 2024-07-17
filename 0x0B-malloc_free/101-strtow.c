#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			words++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (words);
}

/**
 * alloc_word - Allocates memory for a word and copies it from the string.
 * @str: The string to copy the word from.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 *
 * Return: A pointer to the newly allocated word.
 */
char *alloc_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	for (i = start; i < end; i++)
		word[i - start] = str[i];
	word[i - start] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 *         NULL if str == NULL or str == "" or if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		j = i;
		while (str[j] && str[j] != ' ')
			j++;
		if (i != j)
		{
			words[k] = alloc_word(str, i, j);
			if (words[k] == NULL)
			{
				while (k-- > 0)
					free(words[k]);
				free(words);
				return (NULL);
			}
			k++;
			i = j;
		}
	}
	words[k] = NULL;

	return (words);
}

