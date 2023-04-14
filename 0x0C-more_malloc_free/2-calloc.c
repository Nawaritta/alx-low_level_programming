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
	char *Ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	Ar = malloc((nmemb * size) + 1);

	if (Ar == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		Ar[i] = 0;

	Ar[i] = '\0';

	return (Ar);
}
