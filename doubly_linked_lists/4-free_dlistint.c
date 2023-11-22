#include "lists.h"

/**
 * free_dlistint - freeas a list
 * @head: pointer
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head ->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
