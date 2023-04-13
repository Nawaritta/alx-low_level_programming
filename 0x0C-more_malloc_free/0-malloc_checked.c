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
	int status = 98;

	p = malloc(b);
	if (p == NULL)
		exit(status);

	return (p);
}
