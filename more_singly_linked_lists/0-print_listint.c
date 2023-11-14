#include "lists.h"
/**
 * print listint - prints all the elements of a linked lists
 * @ch: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint (const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str;
		h = h->next;
		num++;
	}
		return (num);
}

