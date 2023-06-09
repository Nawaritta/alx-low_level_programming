#include "main.h"
#include "7-print_last_digit.c"
/**
 *print_times_table - prints the n times table
 *@n: times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 99)
				{
					print_last_digit(k / 100);
				}
				if (k > 9)
					print_last_digit(k / 10);
				print_last_digit(k);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');

					if (i * (j + 1) <= 9)
						_putchar(' ');
					if (i * (j + 1) <= 99)
						_putchar(' ');

				}
			}
			_putchar('\n');
		}
	}
}
