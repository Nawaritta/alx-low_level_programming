#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	*head = NULL;
}
