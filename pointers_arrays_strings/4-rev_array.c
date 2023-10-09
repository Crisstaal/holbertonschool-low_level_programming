#include "main.h"
/**
 * reverse_array - reverses the content
 * @a: array integer
 * @n: number of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
