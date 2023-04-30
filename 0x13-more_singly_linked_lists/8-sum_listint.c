#include "lists.h"

/**
 * sum_listint - computes the sum of all data(n) of a listint
 * @head: pointer to the head node
 * Return: a sum
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
