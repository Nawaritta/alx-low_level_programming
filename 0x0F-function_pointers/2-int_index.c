#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - indexes first element of which cmp non returning 0
 * @array: array of element
 * @size: size of array
 * @cmp: function
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] != NULL)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
