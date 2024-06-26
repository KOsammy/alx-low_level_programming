#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *   Prints the first 98 Fibonacci numbers separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, next;

	printf("%lu, %lu", fib1, fib2);
	count = 2;

	while (count < 98)
	{
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;

		printf(", %lu", next);
		count++;
	}

	printf("\n");

	return (0);
}

