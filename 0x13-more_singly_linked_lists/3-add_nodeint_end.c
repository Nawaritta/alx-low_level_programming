#include "lists.h"

/**
 *add_nodeint_end - inserts a node at the end of a list
 *@head: pointer to pointer to head
 *@n: the value of the int in new node structure
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *p;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	p = *head;

	while (p->next != NULL)
	{
		p = p->next;
	}

	p->next = new_node;
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
