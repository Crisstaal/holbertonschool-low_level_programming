#include "hash_tables.h"

/**
 * hash_djb2 - compute hash using djb2
 * @str: sting
 * Return: value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hasht;
	int i;

	hasht = 5381;

	while ((i = *str++))
	{
		hasht = ((hasht << 5) + hasht) + i;
	}
	return (hasht);
}
