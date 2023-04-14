#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int n;


	if (min > max)
		return (NULL);

	n = max - min + 1;

	p = (int *) malloc(sizeof(int) * n);

	if (p == NULL)
		return (NULL);

	for (n = min; n <= max; n++)
	{
		p[n - min] = n;
	}
	return (p);
}
