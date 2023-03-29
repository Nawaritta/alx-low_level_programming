#include "main.h"
#include "2-strlen.c"
/**
 *print_rev - print string in revers
 *@s: point to a string
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len - 1 >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
