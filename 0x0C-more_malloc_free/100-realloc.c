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

	if (new_size == 0 && ptr != NULL)
		return (free(ptr), NULL);

	if (new_size > old_size || ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		if (ptr != NULL)
		{
			memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
	}

	if (old_size >= new_size)
	{
		new_ptr = ptr;

		memset((char *)ptr + new_size, 0, old_size - new_size);

		free(ptr);
	}

	return (new_ptr);
}
