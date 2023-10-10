#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 *               using the Jump search algorithm
 * @array: A pointer to the first element of the array
 * @size: The array size
 * @value: The value to search for
 * Return: The index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t idx = 0, low, high;

	if (array == NULL || !value)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high)
	{

		idx = low + (((value - array[low])*(high - low))/(array[high] - array[low]));

		printf("Value checked array [%ld] ", idx);

		if (idx >= size)
		{
			printf("is out of range\n");
			break;
		} else

			printf("= [%d]\n", array[idx]);

		if (array[idx] > value)
		{
			low= idx + 1;

		} else
		{
			high = idx - 1;
		}

		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
