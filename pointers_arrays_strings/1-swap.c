#include "main.h"

/**
 * swap_int - swaps the values of 2 numbers
 * @a: integer for swap
 * @b: Integer for swap
 *
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
