#include "main.h"
/**
 *print_number - numbers using putchar
 *@n: number to print
 *Return nothing
 */
void print_number(int n)
{
	int a;
	int i;
	int j;
	int d;

	d = 0;
	i = n;
	do {
		i /= 10;
		++d;
	} while (i != 0);

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	} else
		i = n;
	while (d > 0)
	{
		j = d - 1;
		a = 1;
		while (j > 0)
		{
			a *= 10;
			j--;
		}
		_putchar((i / a) + '0');
		i = i - ((i / a) * a);
		d--;
	}
}
