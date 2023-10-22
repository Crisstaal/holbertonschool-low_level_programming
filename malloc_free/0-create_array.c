#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 *
 * @size: size of array
 * @c: store strings
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
