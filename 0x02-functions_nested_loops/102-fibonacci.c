#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Initialize variables */
	long int fib1 = 1, fib2 = 2, next;
	int count;

	/* Print the first two Fibonacci numbers */
	printf("%ld, %ld", fib1, fib2);

	/* Generate and print the remaining Fibonacci numbers */
	for (count = 2; count < 50; count++)
	{
		next = fib1 + fib2;
		printf(", %ld", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n"); /* Print new line */

	return (0); /* Return success */
}

