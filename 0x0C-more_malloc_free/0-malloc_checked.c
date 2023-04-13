#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: a void pointer or 98
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);

	return (p);
}
