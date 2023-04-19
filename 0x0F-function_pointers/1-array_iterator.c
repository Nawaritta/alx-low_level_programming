#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array of input elements
 * @size: size of the array
 * @action: function to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
