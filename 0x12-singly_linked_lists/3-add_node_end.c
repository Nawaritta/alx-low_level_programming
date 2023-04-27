#include "list.h"

/**
 * add_node_end - adds a node at the end a list
 * @head: pointer to the pointer to the head node
 * Return: the address of the new element or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *node = malloc(sizeof(list_t));

	if (new == NULL || node == NULL)
		return (NULL);

	node = *head;

	while (node.next != NULL)
	{
		node = node.next;
	}
	node.next = new;

	print_list(new);

	return (new);
}
