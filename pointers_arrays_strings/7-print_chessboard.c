#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int b;

	for (k = 0; k < 8; k++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[k][b]);
		_putchar('\n');
	}
}
