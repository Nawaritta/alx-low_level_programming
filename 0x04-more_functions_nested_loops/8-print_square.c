#include "main.h"
/**
 * print_square - prints squares
 *
 * @l: lenght of the square edge
 */
void print_square(int l)
{
	int i;
	int j;

	if (l >= 0)
	{
		for (i = 1; i <= l; i++)
		{
			for (j = 0; j < l; j++)
			{
				_putchar('#');
			}
			if (i != l)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
