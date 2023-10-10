#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array
 * @size: The array size
 * @value: The value to search for
 * Return: The index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, step;

	if (array == NULL || !value)
		return (-1);

	step = sqrt(size);

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
