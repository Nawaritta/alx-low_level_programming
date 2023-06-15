#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 *@h: pointer to the head
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	if (h == NULL)
		return (len);

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		len++;
		current = current->next;
	}
	return (len);
}
