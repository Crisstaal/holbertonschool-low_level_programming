#include "lists.h"

/**
 * sum_dlistint - sum of all the data
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head != NULL)
	{
		if(head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		else (head->prev != NULL)
			head = head->prev;
	}
	return (sum);
}
