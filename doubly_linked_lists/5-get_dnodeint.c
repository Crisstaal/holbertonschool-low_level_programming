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
	if (head == NULL)
		return (NULL);

	temp = head;
	if (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
