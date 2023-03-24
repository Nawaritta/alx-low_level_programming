#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @l: edge length of the triangle
 */
void print_triangle(int l)
{
	int i;
	int j;
	int k;

	if (l >= 0)
	{
		for (i = 1; i <= l; i++)
		{
			for (j = l - i ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
