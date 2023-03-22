#include "main.h"
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n)
{
	int x;

	if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else
		_putchar('0');
		x = 0;
	return (x);
}
