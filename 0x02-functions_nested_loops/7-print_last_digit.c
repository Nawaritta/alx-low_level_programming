#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: integer to treat
 * Return: last digit of integer
 */
int print_last_digit(int i)
{
	int ld;
	long j;

	if (i < 0)
		i = -i;
	j = i;
	ld = j % 10;
	_putchar('0' + ld);
	return (ld);
}
