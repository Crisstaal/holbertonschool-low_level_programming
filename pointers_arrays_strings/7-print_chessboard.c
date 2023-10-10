#include "main.h"
/**
 * print_chesboard - prints the chessboard
 * @a: array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int b;

	for (k = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[k][b]);
		_putchar('\n');
	}
}
