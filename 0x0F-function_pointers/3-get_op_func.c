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
	int i;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
int (*get_op_func(char *s))(int, int)
{
	char op[] = "+-*//%";
	int_index(op, 5,
		  int i;
}
