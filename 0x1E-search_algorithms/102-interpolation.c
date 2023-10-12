#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 *               using the  Interpolation search.
 * @array: A pointer to the first element of the array
 * @size: The array size
 * @value: The value to search for
 *
 * Return: The index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t  idx = 0, low, high, denom;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value <= array[high] && value >= array[low])
	{
		denom = array[high] - array[low];

		idx = low + (((double)(high - low) / (denom)) * (value - array[low]));

		printf("Value checked array [%lu] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
		{
			return (idx);

		} else if (array[idx] < value)
		{
			low = idx + 1;
		} else
		{
			high = idx - 1;
		}
	}
	denom = array[high] - array[low];
	idx = low + (((double)(high - low) / (denom)) * (value - array[low]));

	printf("Value checked array [%lu] is out of range\n", idx);
	return (-1);
}
