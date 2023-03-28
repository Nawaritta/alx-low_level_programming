#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to revers
 */
void rev_string(char *s)
{
	int len;
	int i;
	char stemp[len];

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}

	for (i = len - 1; i >= 0; i--)
	{
		stemp[len - 1 - i] = s[i];
	}
	s = stemp;
	_putchar('\n');
}
