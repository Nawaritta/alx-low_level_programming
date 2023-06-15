#include "lists.h"
#include "5-get_dnodeint.c"
/**
 * delete_dnodeint_at_index - deletes a node at given index
 *@head: double pointer the head
 *@index: the position of th node to be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *deleted;

	deleted = get_dnodeint_at_index(head, index);

	if (deleted == NULL)
		return (-1);

	deleted->next->prev = deleted->prev;
	deleted->prev->next = deleted->next;

	free(deleted);
	return (1);
}
