#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: integer to treat
 * Return: last digit of integer
 */
int print_last_digit(int i)
{
	unsigned j;

	if (i < 0)
		i *= -1;
	j = i;
	_putchar('0' + j % 10);
	return (j % 10);
}
