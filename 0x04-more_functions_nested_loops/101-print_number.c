#include "main.h"
#include <math.h>
/**
 *print_number - numbers using putchar
 *@n: number to print
 *Return nothing
 */

void print_number(int n)
{
	int a;
	int i;
	int d;

	d = 0;
	i = n;
	do {
		i /= 10;
		++d;
	} while (i != 0);
	i = n;

	while (i != n % 10)
	{
		a = pow(10, (d - 1));
		_putchar((i / a) + '0');
		i = i - ((i / a) * a);
		d--;
	}
	_putchar((n % 10) + '0');
}
