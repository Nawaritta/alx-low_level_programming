#include <stdio.h>
/**
 *print_array - print an array
 *@a: point to an int
 *@n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
