#include "main.h"
/**
 *print_number - numbers using putchar
 *@n: number to print
 *Return nothing
 */

void print_number(int n)
{
	if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else
	{
		if (n > 0 && )
		{
			_putchar((n % 10) + '0');
		} else
		{
			_putchar('-');
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
