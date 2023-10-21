#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplications
 * @argc - count
 * @argv - argument
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d\n", a *b);

		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
