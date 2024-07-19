#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _is_digit - Checks if a string is composed of digits
 * @s: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _print_error - Prints an error message and exits with status 98
 */
void _print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 *
 * Return: A pointer to the result string
 */
char *_multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	int i, j, carry, n1, n2, sum;
	char *final_result;

	if (!result)
		_print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}

	final_result = malloc(len1 + len2 + 1);
	if (!final_result)
	{
		free(result);
		_print_error();
	}

	for (i = 0, j = 0; i < len1 + len2; i++)
	{
		if (!(j == 0 && result[i] == 0))
			final_result[j++] = result[i] + '0';
	}
	final_result[j] = '\0';
	free(result);

	return (final_result[0] == '\0') ? "0" : final_result;
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
		_print_error();

	if (!_is_digit(argv[1]) || !_is_digit(argv[2]))
		_print_error();

	result = _multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}

