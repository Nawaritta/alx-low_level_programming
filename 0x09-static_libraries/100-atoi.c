#include "main.h"
#include "2-strlen.c"

/**
 *_atoi - converts a string to an integer
 *@s: string to convert
 *Return: integer
 */
int _atoi(char *s)
{

	int i;
	int nb = 0;
	int k = 1;
	int sgn = 0;
	int len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		if (s[i] < '9' && s[i] > '0')
		{
			nb += ((s[i] - '0') * k);
			k *= 10;
		}
		if (s[i] == '+')
			sgn++;
		if (s[i] == '-')
			sgn--;
	}
	if (sgn < 0 && (-sgn) % 2 != 0)
		nb *= -1;

	return (nb);

}
