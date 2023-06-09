#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 *@head: pointer to the head
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
