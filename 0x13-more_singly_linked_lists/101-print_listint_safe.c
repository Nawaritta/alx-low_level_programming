#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: pointer to the head node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *repeted = head;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		node++;

		if (head == repeted)
			exit(98);
	}
	return (node);
}
