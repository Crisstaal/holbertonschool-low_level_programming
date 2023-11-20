#include "lists.h"
/**
 * creating_node - creates a new node
 * @n: node
 * Return: pointer
 */

listint_t *creating_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	return (NULL);
	node->n = n;
	node->next = NULL;

	return (node);
}

/**
 * insert_nodeint_at_index - insert a node at the index
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: new node data
 *
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *node;

	temp = *head;
	if (head == NULL)
		return (NULL);
	node = creating_node(n);
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	if (idx == 0)
		*head = node;
	for (a = 0; a < idx - 1 && temp != NULL && idx != 0; a++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		node->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = node;
		node->next = temp_old;
	}
	return (node);
}
