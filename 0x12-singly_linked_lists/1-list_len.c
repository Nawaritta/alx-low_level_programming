#include "list.h"
/**
 * size_t list_len - gives the number of elements of a linked list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int node = 0;

      	while(h != NULL)
	{
		node ++;
		h = str.next;
	}
	printf("-> %d elements", node);
	return (node);
}
