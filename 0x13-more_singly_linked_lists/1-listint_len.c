#include "lists.h"

/**
 * listint_len - gives the length of a linked lists
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
