#include "lists.h"

/**
 * list_len - computes the number of elements in a linked
 * @h: pointer to the head node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nbr = 0;

	while (h != NULL)
	{
		nbr++;
		h = h->next;
	}

	return (nbr);
}
