#include "lists.h"
#include "loop_check.c"
/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: pointer to the head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *ind;

	if (*head == NULL)
		exit(98);

	ind = head;
	node = loop_check(head);

	while (node)
	{
		printf("[%p] %d\n", (void *)ind, ind->n);
		node--;
		ind = ind->next;
	}

	if (ind != NULL)
		printf("-> [%p] %d\n", (void *)ind, ind->n);
	return (loop_check(head));
}
