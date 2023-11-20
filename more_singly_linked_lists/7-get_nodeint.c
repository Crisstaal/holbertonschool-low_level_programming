#include "lists.h"
/**
 * get_nodeint_at_index - retrieve a node
 * @head: pointer
 * @index: index of the node to retrieve
 *
 * @Return: pointer to the node if else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
