#include "lists.h"

/**
 * print_list - prints all elements
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (h != str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
