#include "lists.h"

/**
 * add_nodeint - inserts a node at the beginning of a list
 *@head: pointer to pointer to head
 *@n: the value of the int in new node structure
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
