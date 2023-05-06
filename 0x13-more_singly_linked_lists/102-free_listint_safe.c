#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node, count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (count);

	node = print_listint_safe(*h);

	current = *h;
	while (count < node)
	{
		temp = current->next;
		free(current);
		count++;

		if ((void *)current <= (void *)temp)
			break;

		current = temp;
	}

	*h = NULL;
	return (count);
}
