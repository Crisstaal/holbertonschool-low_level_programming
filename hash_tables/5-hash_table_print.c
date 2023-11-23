#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print the key
 * @ht: pointer
 * @key: value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *b;
	int end = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");

	for (i = 0; i <ht->size; i++)
	{
		b = ht->array[i];
		while (b)
		{
			if (end)
				printf(",");
			printf("'%s': '%s'", b->key, b->value);
			end = 1;
			b = b->next;
		}
	}
	printf("}\n");
}
