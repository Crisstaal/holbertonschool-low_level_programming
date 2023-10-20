#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion(int n) - returns the natural square root
* @n: number to calculate the square root
*
* Return: result of square root
*/

int _sqrt_recursion(int n)
{ 
    if (n < 0)
    {
        return (-1);
    }
        return (actual_sqrt_recursion(n, 1));
    
}

int actual_sqrt_recursion(int n, int i)
{

    if (i * i == n)
    {
        return (i);
    }

    if (i * i > n)
    {
        return (-1);
    }

    return actual_sqrt_recursion(n, i + 1);
}
