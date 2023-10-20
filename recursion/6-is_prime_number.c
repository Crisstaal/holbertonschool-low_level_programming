#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - if an integer is a prime number
 * @n: number
 * 
 * Return: 0
*/

int is_prime_number(int n)
{
        if (n <= 1)
        {
            return (0);
        }
            return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates is a number is prime
 * @n: number 
 * @i: iterator
 * 
 * Return: 1 if prime, 0 if not
*/

int actual_prime(int n, int i)
{
        if (i == 1)
        {
            return (1);
        }

        if (n % i == 0 && i > 1)
        {
            return (0);
        }
        return (actual_prime(n, i -1));
}