#include "main.h"
/**
 * flip_bits - gets the number of bits needed to flip to get from one number
 * to another.
 * @n: number
 * @m: number
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answer;
	unsigned long int count;

	answer = n ^ m;

	for (count = 0; answer > 0;)
	{
		if ((answer & 1) == 1)
			count++;
		answer = answer >> 1;
	}
	return (count);
}
