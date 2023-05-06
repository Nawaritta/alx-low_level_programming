#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 10);
	add_nodeint(&head, 20);
	add_nodeint(&head, 30);
	add_nodeint(&head, 40);
	node->next = add_nodeint(&head, 980);
	add_nodeint(&head, 4020);
	add_nodeint(&head, 10240);
	print_listint_safe(head);
	return (0);
}
