#include "main.h"
/**
 *print_rev - print string in revers
 *@str: point to a string
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
