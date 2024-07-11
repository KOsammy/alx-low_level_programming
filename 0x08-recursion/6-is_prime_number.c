#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - helper function to check if an integer is a prime number
 * @n: the integer to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, i + 1));
}

