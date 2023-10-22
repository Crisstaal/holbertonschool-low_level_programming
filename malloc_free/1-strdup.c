#include <stdlib.h>
#include "main.h"

/**
 * _strdup - retruns a pointer as newly allocated
 *
 * @str: intial string
 *
 * Return: pointer to the allocated memory
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *)malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
