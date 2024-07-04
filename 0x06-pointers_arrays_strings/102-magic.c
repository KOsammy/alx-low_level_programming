#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Initializes an integer array 'a', assigns a value to 'a[2]',
 *              creates a pointer 'p' pointing to an integer 'n', and then
 *              adds a statement to indirectly modify 'a[2]'
 *              Finally, prints the modified value of 'a[2]'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;  /* This line of code is added */

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

