#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: specific char to initialize
 *Return: array of strings
 */
char *create_array(unsigned int size, char c)
{
	char *Ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	Ar = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		Ar[i] = c;

	return (Ar);
}
