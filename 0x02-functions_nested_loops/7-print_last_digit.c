#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: integer to treat
 * Return: last digit of integer
 */
int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;

	_putchar('0' + i % 10);
	return (i % 10);
}
