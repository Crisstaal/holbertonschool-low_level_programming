#include "lists.h"
/**
 * print listint - prints all the elements of a linked lists
 * @ch: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
       if(h == NULL)
	       return (0);
	for (num = 0; h != NULL; num ++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
		return (num);
}
