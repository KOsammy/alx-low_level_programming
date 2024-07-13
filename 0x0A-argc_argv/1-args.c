#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter */
	printf("%d\n", argc - 1);
	return (0);
}

