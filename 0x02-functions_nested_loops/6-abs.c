#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @d: the number to compute absolute value for
 *
 * Return: absolute value of d
 */
int _abs(int d)
{
	if (d < 0)
		return (-d);
	else
		return (d);
}

