#include "lists.h"
#include "7-get_nodeint.c"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to the head node
 * @index: The index at which to delete a node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *prev_node;
	listint_t *rem_node = get_nodeint_at_index(*head, index);


	if (rem_node == NULL)
		return (-1);

	if (index != 0)
	{
		prev_node = get_nodeint_at_index(*head, index - 1);
		prev_node->next = rem_node->next;
	} else
		*head = (*head)->next;

	free(rem_node);
	return (1);
}
