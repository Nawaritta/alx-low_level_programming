#include "list.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

      	while(h != NULL)
	{
		if (h.str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h.len, h.str);
		}
		node++;
		h = str.next;
       	}
	return (node);
}
