#include "lists.h"
/**
 * free_list - frees a list
 *@head: pointer to the head
 */
void free_list(list_t *head)
{
	if (head->next == NULL)
		free(head);
	else
	{
		list_t *tmp;

		while (head != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
