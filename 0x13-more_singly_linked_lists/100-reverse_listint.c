#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the pointer to head
 * Return: the head node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *tmp;


	if (head == NULL || *head == NULL)
		return (NULL);

	next = (*head)->next;
	tmp = next;
	(*head)->next = NULL;

	while (next != NULL)
	{
		tmp = next->next;
		next->next = *head;
		*head = next;
		next = tmp;
	}
	return (*head);
}
