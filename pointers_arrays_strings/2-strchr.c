#include "main.h"
/**
 * _strchr - locates a character
 * @s: input
 * @c: input
 *
 * Return: NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while ( s[a] != '\0')
	{
		if (s[a] == c)
			return &s[a];
		a++;
	}
	
	return ('\0');
}
