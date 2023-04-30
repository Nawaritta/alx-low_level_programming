#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t a linked list
 * @head: pointer to pointer to the head node
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	old_head = *head;

	if (old_head->next != NULL)
		*head = old_head->next;

	free(old_head);

	return (n);
}
