#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 * @h:head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}
	
	if (h != NULL)
	{
		printf(h->n,"%d/n");
		count++;
		h = h->next;
	}
	
	if (h->prev != NULL)
		h = h->prev;

	return (count);
}
