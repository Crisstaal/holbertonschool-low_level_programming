#include "main.h"
#include <stdio.h>

/**
 *
 * main - print program name
 * @argc: count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
