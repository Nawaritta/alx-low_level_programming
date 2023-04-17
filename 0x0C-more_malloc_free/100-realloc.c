#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr:  a pointer to the memory previously allocated
 *@old_size: the size, in bytes, of the allocated space for ptr
 *@new_size:  the new size, in bytes of the new memory block
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		else
			return (NULL);
	}

	if (ptr == NULL || new_size > old_size)
		new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (old_size >= new_size)
	{
		new_ptr = ptr;
		memset((int *)ptr + new_size, 0, (old_size - new_size + 1) * sizeof(int));
		return (new_ptr);
	}

	memcpy(new_ptr, ptr, old_size);

	free(ptr);

	return (new_ptr);
}
