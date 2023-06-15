#include "lists.h"
#include "5-get_dnodeint.c"

/**
 * insert_dnodeint_at_index - inserts a node at given index
 *@h: double pointer the head
 *@idx: the position of the new node
 *@n: the value of the integer
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *previous, inserted = NULL;

	previous = get_dnodeint_at_index(h, idx - 1);

	if (previous == NULL)
		return (NULL);

	inserted = malloc(sizeof(dlistint_t));
	if (inserted == NULL)
		return (NULL);

	inserted->n = n;
	inserted->next = NULL;
	inserted->prev = previous;

	if (previous->next != NULL)
	{
		inserted->next = previous->next;
		inserted->next->prev = inserted;
	}
	previous->next = inserted;
	return (inserted);
}
