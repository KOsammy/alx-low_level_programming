#include <stdlib.h>
#include "main.h"

/**
 * _calloc - This allocates memory for arrays using malloc and init to zero
 * @nmember: The number of Elements
 * @size: The size of each elememt
 *
 * Return: Pointer of the allocated memory, or Null if nmemeber sizt is 0
 */
void *_calloc(unsigned int nmember, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmember == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmember * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmember * size); i++)
		ptr[i] = 0;

	return (ptr);
}

