#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return nothing
 */
void print_numbers(void)
{
	for (i = 48; i < 58; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
