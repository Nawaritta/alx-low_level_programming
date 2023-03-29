#include "main.h"
#include "2-strlen.c"
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

	len = _strlen(s);
	if (len % 2)
		n = len / 2;
	else
		n = (len + 1) / 2;
	i = 0;

	while (i < n)
	{
		stemp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = stemp;
		i++;
	}
}
