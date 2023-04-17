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

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
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
/**

             The realloc() function changes the size of the memory block pointed to by ptr to size bytes.

	     The contents will be unchanged in the  range  from the start of the region up to the minimum of the old and new sizes.


	1/ If the new size is larger than the old size, the added memory will not be initialized.

	2/ If ptr is NULL, then the call is equivalent to malloc(size), for all values of size;

        3/ if size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr).

        4/ If the area pointed to was moved, a free(ptr) is done.

        RETURN VALUE

		The realloc() function returns a pointer to the newly allocated memory, which is suitably aligned for any built-in type,
      or NULL if the request  failed.

		The returned pointer may be the same as ptr if the allocation was not moved
		(e.g., there was room to expand the allo‐cation in-place),or different from ptr if the allocation was moved to a new address.

		If size was equal to 0, either NULL or a pointer suitable to be passed to free() is returned.

      If realloc() fails, the original block is left untouched; it is not freed or moved. On  success, the reallocarray() function returns a pointer to the newly allocated memory.  On failure, it returns NULL and the original block of memory is left untouched.   
*/
