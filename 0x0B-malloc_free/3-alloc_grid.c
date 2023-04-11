#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - creates 2 dim array
 * @width: array width
 * @height: array height
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **M;
	int i, j;

	if (width == 0 && height == 0)
		return (NULL);

	M = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		M[i] = (int *)malloc(sizeof(int) * width);
		if (M[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(M[j]);
			}
			free(M);
		} else
		{
			for (j = 0; j < width; j++)
				M[i][j] = 0;
		}
	}
	return (M);
}
