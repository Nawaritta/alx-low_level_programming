#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array:");
	for (; i < size - 1; i++)
	{
		printf(" %d,", array[i]);
	}
	printf(" %d\n", array[i]);
}

/**
 * binary_search - Searches for a value in an array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to search for.
 * Return: The index where the value is found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		print_array(array + left, right - left + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
