#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the table
 * @ht: pointer
 * @key: key
 * @value: value
 * Return: -1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new;
	char *value_copy;
	unsigned long int i;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value);

	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
	free(value_copy);
	return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
	free(new);
	return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
