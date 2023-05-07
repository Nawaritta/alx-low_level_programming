#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	reverse_listint(&head);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
