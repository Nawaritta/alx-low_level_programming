#include "lists.h"
/**
 *add_dnodeint - adds a node at the beginning of a doubly linked list
 *@n: the value of the int of the added node
 *@head: pointer to the head of the list
 *Return: the address of the added element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
