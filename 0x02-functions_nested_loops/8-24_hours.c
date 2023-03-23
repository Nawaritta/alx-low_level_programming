#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	int jm;

	jm = 9;
	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
		{
			jm = 3;
		}
		for (j = 0; j <= jm; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
