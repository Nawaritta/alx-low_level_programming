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
	int bounded = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

		if (!bounded)
		{
			if (idx + step < size)
			{
				if (array[idx + step] >= value)
				{
					bounded = 1;
					size = idx + step + 1;
				}
			} else
				bounded = 1;
		}
		if (bounded == 1)
		{
			printf("Value found between indexes [%ld]", idx);
			printf(" and [%ld]\n", idx + step);
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
			step = 1;
			bounded = 2;
		}

		if (array[idx] == value)
			return (idx);
		idx += step;
	}
	return (-1);
}
