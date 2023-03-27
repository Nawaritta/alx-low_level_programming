#include "main.h"
/**
 *_puts - print string
 *@str: point to a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
