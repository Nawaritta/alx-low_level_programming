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

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('\\');
			if (i != n)
				_putchar('\n');
			for (k = 1; k <= n; k++)
				_putchar(' ');
			i++;
		}
	}
		_putchar('\n');
}
