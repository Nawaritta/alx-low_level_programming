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
		n = (len / 2) - 1;
	else
		n = ((len - 1) / 2) - 1;

	while (n > 0)
	{
		stemp = s[len - 1 - n];
		s[len - 1 - n] = s[n];
		s[n] = stemp;
		n--;
	}
	_putchar('\n');
}
