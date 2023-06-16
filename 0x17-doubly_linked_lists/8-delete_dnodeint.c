#include "lists.h"
#include "1-dlistint_len.c"
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

	if (dlistint_len(*head) <= index)
		return (-1);


	deleted = get_dnodeint_at_index(*head, index);

	if (deleted->next != NULL)
		deleted->next->prev = NULL;
	if (deleted->prev != NULL)
		deleted->prev->next = NULL;
	else
	{
		if (deleted->next != NULL)
			*head = deleted->next;
	}

	if (deleted->prev != NULL && deleted->next != NULL)
	{
		deleted->next->prev = deleted->prev;
		deleted->prev->next = deleted->next;
	}
	free(deleted);
	return (1);
}
