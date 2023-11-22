#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: value
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new =malloc(sizeof(dlistint_t));
	if (new == NULL)
		retrun(NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		if (h->prev != NULL)
			h = h-> prev;
	}
	new->next = h;

	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
