#include "lists.h"
#include "7-get_nodeint.c"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the head node
 * @idx: The index at which to insert a node
 * Return: The node at a given index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node;
	listint_t *insert_node = malloc(sizeof(listint_t));

	if (insert_node == NULL)
		return (NULL);


	insert_node->n = n;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
	} else
	{
		prev_node = get_nodeint_at_index(*head, idx - 1);
		insert_node->next = prev_node->next;
		prev_node->next = insert_node;
	}
	return (insert_node);
}
