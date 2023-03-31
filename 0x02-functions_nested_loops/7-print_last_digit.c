#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @i: integer to treat
 * Return: last digit of integer
 */
int print_last_digit(int i)
{
	int ld;
	int j = i;

	if (i < 0)
		j = -i;
	ld = j % 10;
	_putchar('0' + ld);
	return (ld);
}
