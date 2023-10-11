#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of integers
 *               using the exponential_search.
 * @array: A pointer to the first element of the array
 * @size: The array size
 * @value: The value to search for
 * Return: The index
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, low, high;

	if (array == NULL || !value)
		return (-1);


	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if ((array[idx + step] >= value || idx + step >= size) && step != 1)
		{
			printf("Value found between indexes [%ld]", idx);
			printf(" and [%ld]\n", idx + step);
			step = 1;
		}
		if (array[idx] == value)
			return (idx);
		idx += step;
	}
	return (-1);
}
