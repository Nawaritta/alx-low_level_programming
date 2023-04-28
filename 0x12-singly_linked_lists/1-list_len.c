#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
