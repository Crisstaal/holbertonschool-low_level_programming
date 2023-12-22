#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, temp;
	hash_table_t *head = ht;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
