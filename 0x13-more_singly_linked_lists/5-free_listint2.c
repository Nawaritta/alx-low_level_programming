#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head node
 */

void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		listint_t *tmp = *head;

		while ((*head)->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			(*head) = tmp;
		}
		free(*head);
		*head = NULL;
	}
}
