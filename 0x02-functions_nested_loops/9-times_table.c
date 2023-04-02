#include "main.h"
#include "7-print_last_digit.c"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 *
 */
void times_table(void)
{
	int i;
	int j;
	char k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
				print_last_digit(k / 10);
			print_last_digit(k);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) <= 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
