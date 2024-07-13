#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */
	printf("%s\n", argv[0]);
	return (0);
}

