#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d]\n", h->n);
		}
		node++;
		h = h->next;
	}
	return (node);
}
