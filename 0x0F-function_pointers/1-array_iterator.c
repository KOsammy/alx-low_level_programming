#include "function_pointers.h"

/**
 * array_iterator - executes a functiom given a parameter
 * on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function we must use
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

