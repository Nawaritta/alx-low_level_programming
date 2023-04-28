#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 * @head: pointer to the pointer to the head node
 * Return: the address of the new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	print_list(new);
	return (new);
}
