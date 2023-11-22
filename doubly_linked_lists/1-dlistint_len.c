#include "lists.h"

/**
 * dlistint_len - returns the number of elemts
 * @h: head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	if (h->prev != NULL)
		h = h->prev;
	if (h != NULL)
	{
		count++;
		h = h->next;
	}
	return(count);
}
