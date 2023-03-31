#include "main.h"
/**
 *print_number - prints number
 *@n: integer to print
 */
void print_number(int n)
{	int i;
	int j;
	int d = 0;

	i = n;
	do {
		i /= 10;
		++d;
	} while (i != 0);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (d > 0)
	{
		j = d - 1;
		i = 1;
		while (j > 0)
		{
			i *= 10;
			j--;
		}
		_putchar((n / i) + '0');
		n = n - ((n / i) * i);
		d--;
	}
}
