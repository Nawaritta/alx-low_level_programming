#include "lists.h"
/**
 * sum_dlistint - adds all the data (n) of a dlistint_t linked list.
 *@head: pointer to the head
 *Return: returns the sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (sum);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
