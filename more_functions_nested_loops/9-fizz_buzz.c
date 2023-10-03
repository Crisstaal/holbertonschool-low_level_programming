#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1 to 100 then a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz\n");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
