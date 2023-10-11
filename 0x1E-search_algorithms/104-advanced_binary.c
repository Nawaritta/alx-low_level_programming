#include "search_algos.h"
#include <stdio.h>

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
 * recursive_binary - Recursively searches for a value in a sorted
                      array of integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array.
 * @left: The left index of the search range.
 * @right: The right index of the search range.
 * @value: The value to search for.
 *
 * Return: The index where the value is found, or -1 if not found.
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		print_array(array + left, right - left + 1);

		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return recursive_binary(array, left, mid - 1, value);
			else
				return mid;
		}
		if (array[mid] < value)
			return recursive_binary(array, mid + 1, right, value);
		if (array[mid] > value)
			return recursive_binary(array, left, mid - 1, value);
	}

	return -1;
}

/**
 * advanced_binary - Searches for a value in an array of integers
 *                   using the Binary search algorithm (advanced).
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is found, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return (recursive_binary(array, 0, size - 1, value));
}
