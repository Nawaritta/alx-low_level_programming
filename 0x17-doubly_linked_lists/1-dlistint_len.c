#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a doubly linked list
 *@h: pointer to the head
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	if (h == NULL)
		return (len);

	current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
