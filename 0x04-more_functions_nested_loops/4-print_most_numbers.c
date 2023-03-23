#include "main.h"
/**
 *void print_most_numbers: prints numbers from 0 to 9 except 2 and 4
 *
 *Return nothing
 */
void print_most_numbers(void)
{
	for (i = 48; i <= 58; i++)
	{
		if(i == 50 || i == 52)
			continue;
		_putchar('i');
	}
	_putchar('\n');
}
