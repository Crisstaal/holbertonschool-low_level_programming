#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum
 * @a: number
 * @b: number
 *
 * Return: sum of the two
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: number
 * @b: number
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: number
 * @b: number
 * Return: product 
 */

int op_mult(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 
 * @a: number
 * @b: number
 *
 * Return: division answer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder from division
 * @a: number
 * @b: number
 *
 * Return: reminder from division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
