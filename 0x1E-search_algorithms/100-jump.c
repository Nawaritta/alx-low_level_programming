#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
                    using the Linear search algorithm
 * @array: A pointer to the first element of the array
 * @size: The array size
 * @value: The value to search for
 * Return: The index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	size_t step;


	if (array == NULL || !value)
		return (-1);

	step = sqrt(size);

	while (idx + step < size)
	{
		if (array[idx] == value)
			return (idx);
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (array[idx + step] > value)
			step = 1;
		idx += step;
	}
	return (-1);
}
