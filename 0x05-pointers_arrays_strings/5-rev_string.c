#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to revers
 */
void rev_string(char *s)
{
	int len;
	int i;
	int n;
	char stemp;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
	if (len % 2)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = 0; i < n; i++)
	{
		stemp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = stemp;
	}
	_putchar('\n');
}
