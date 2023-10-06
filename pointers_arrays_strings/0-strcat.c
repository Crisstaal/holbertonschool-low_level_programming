#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: value
 * @src: value
 *
 * Return: void
 */

char *strcat(char *dest, char *src)
{
	int a;
	int b;
	
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	
	dest = '\0';
	return (dest);
}
