#include "main.h"
/**
 *print_rev - print string in revers
 *@s: point to a string
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
