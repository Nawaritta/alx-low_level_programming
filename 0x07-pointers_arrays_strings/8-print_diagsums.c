#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - sum matrix diagonal
 *@a: pointer to square matrix of integers
 *@size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int diag1 = *a;
	int diag2 = *(a + size);
	int *b = a;

	while(*a != '\0')
	{
		a += size + 1;
		printf("%ls, %p",a,&a);
		diag1 += *a;

		diag2 += *(b + size - 1);
		b += size - 1;
	}
	printf("%d, %d\n", diag1, diag2);
}
