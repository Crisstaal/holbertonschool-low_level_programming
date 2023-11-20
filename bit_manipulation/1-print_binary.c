#include "main.h"
/**
 * print_bin - prints binary representation
 * @n: decimal
 * Return: void
 */
/**
 * print_binary - prints the binary
 * @n: decimal needed to convert
 */

void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if((n & 1 ) == 0)
		_putchar ('0');
}
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
