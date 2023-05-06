#include "lists.h"
/**
 * loop_check - check if there is a loop in a linked list
 * @head: pointer to the head node
 * Return: number of nodes in the list
 */
size_t loop_check(const listint_t *head)
{
	const listint_t *address[200000];
	size_t i, len = 0;
	const listint_t *temp = head;

	while (temp != NULL)
	{
		address[len++] = temp;
		temp = temp->next;
		for (i = 0; i < len; i++)
		{
			if ((void *)address[i] == (void *)temp)
			{
				return (len);
			}
		}
	}
	return (len);
}
