#include "lists.h"

/**
 * pop_listint - frees a linked list
 * @head: pointer to pointer to the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head = (*head)->next;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	free(*head);
	*head = new_head;

	return (n);
}
