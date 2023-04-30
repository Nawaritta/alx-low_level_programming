#include "lists.h"

/**
 *get_nodeint_at_index - gives the nth node of a linked lists
 * @head: pointer to the head node
 * @index: The index of the node that we want to return
 * Return: The node at a given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	while (index > 0 && node->next != NULL)
	{
		node = node->next;
		index--;
	}
	if (index == 0 && head != NULL)
		return (node);

	return (NULL);
}
