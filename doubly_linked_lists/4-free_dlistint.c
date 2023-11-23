#include "lists.h"

/**
 * free_dlistint - freeas a list
 * @head: pointer
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
