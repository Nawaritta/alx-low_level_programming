#include "search_algos.h"

int recursive_binary(int *array, size_t size, int value, size_t index);

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
 * advanced_binary - Searches for a value in an array of integers
 *                 using the Binary search algorithm (advanced).
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to search for.
 * Return: The index where the value is found, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size == 0)
		return (-1);

	index = (size - 1) / 2;

	return (recursive_binary(array, size, value, index));
}

int recursive_binary(int *array, size_t size, int value, size_t index)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (left < right)
	{
		mid = right / 2;
                print_array(array, size);

		if (array[mid] < value)
		{
			index += mid;
			left = mid + 1;

		} else if (array[mid] > value)
		{
			index -= mid;
			right = mid - 1;

		} else
			return (mid);

		recursive_binary(array + left, right - left + 1, value, index);
	}
	return (-1);
}
