#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer
 * @index: index
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int size;

	size = 0;
	temp = head;

	while (temp != NULL)
	{
		if (size == index)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
