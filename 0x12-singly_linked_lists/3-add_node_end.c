#include "lists.h"

/**
 * add_node_end - adds a node at the end a list
 * @head: pointer to the pointer to the head node
 * @str: string of the added node
 * Return: the address of the new element or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *node = *head;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	} else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new;
	}

	new->str = strdup(str);
	new->next = NULL;
	new->len = strlen(str);

	return (new);
}
