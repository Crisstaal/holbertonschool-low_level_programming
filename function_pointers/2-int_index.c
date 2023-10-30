#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array
 * @size: array size
 * @cmp: function pointer
 *
 * Return: element matches, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
