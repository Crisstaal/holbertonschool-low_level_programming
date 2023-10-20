#include "main.h"
/**
* _sqrt_recursion(int n) - returns the natural square root
* @n: number to calculate the square root
*
* Return: result of square root
*/

int _sqrt_recursion(int n, int i) {
    if (n < 0)
    {
        return (-1);
    }

    if (n == 0 || n == 1)
    {
        return (n);
    }

    if (i * i == n)
    {
        return (i);
    }

    if (i * i > n)
    {
        return (-1);
    }

    return _sqrt_recursion(n, i + 1);
}

int _sqrt_recursion(int n)
{
    return _sqrt_recursion(n, 1);
}