#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: pointer to the head node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *ind;

	if (head == NULL)
		exit(98);

	ind = head;

	while (ind != NULL)
	{
		printf("[%p] %d\n", (void *)ind, ind->n);
		node++;

		if (ind->next < head)
		{
			printf("-> [%p] %d\n", (void *)ind->next, (ind->next)->n);
			exit(98);
		}

		ind = ind->next;
	}
	return (node);
}
/**
 *loop_check - check if there is a loop
 * @head: pointer to the head node
 * Return: number of nodes
 */

size_t *loop_check(listint_t *head)
{

	while ()
	{
	}
	return (NULL);
}
