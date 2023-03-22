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

	ld = i % 10;
	_putchar('0' + ld);
	return (ld);
}
