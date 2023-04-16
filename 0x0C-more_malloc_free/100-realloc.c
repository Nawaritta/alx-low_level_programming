#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_realloc -  reallocates a memory block using malloc and free
 *@ptr:  a pointer to the memory previously allocated
 *@old_size: the size, in bytes, of the allocated space for ptr
 *@new_size:  the new size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int tocopy;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	tocopy = old_size;

	if (tocopy > new_size)
		tocopy = new_size;

	memcpy(new_ptr, ptr, tocopy);

	free(ptr);
	return (new_ptr);

}
