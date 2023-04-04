#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - sum matrix diagonal
 *@a: pointer to square matrix of integers
 *@size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(i * size) + i];
		diag2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
