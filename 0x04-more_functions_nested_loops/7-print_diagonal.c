#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal.
 *@n: is the number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int i;
	int k;

	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('\\');
			if (i != n)
				_putchar('\n');
			for (k = 1; k <= i; k++)
				_putchar(' ');
			i++;
		}
	}
		_putchar('\n');
}
