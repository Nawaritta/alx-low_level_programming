#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (k = 0; k < 8; k++)
	{
		for (i = k + 1; i < 9; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				putchar((k) + '0');
				putchar((i) + '0');
				putchar((j) + '0');
				if (k != 7 || j != 9 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
