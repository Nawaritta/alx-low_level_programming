#include "main.h"
# include "2-strlen.c"
/**
 *puts2 - prints every other character
 *@str: point to a string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
