#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *tmp;

	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
