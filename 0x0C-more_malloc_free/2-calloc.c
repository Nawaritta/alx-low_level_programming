#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: size in bytes
 *Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *Ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	Ar = (int *) calloc(size * nmemb, sizeof(int));

	if (Ar == NULL)
		return (NULL);

       	return (Ar);
}
