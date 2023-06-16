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
	dlistint_t *previous, *inserted = NULL;

	if (dlistint_len(*head) <= idx)
		return (NULL);

	if (idx != 0)
		previous = get_dnodeint_at_index(*h, idx - 1);

	inserted = malloc(sizeof(dlistint_t));
	if (inserted == NULL)
		return (NULL);

	inserted->n = n;
	inserted->next = NULL;
	inserted->prev = NULL;

	if (idx != 0)
	{
		inserted->prev = previous;

		if (previous->next != NULL)
		{
			inserted->next = previous->next;
			inserted->next->prev = inserted;
		}
		previous->next = inserted;
	} else
	{
		if (*h != NULL)
		{
			inserted->next = *h;
			(*h)->prev = inserted;
		}
		*h = inserted;
	}
	return (inserted);
}
