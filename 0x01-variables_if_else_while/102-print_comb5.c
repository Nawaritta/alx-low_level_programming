#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;
	int j;
	int ii;
	int jj;

	for (ii = 0; ii < 10; ii++)
	{
		for (jj = 0; jj < 10; jj++)
		{
			int i;
			int j;
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					putchar((ii) + '0');
					putchar((jj) + '0');
					putchar(' ');
					putchar((i) + '0');
					putchar((j) + '0');
					if (j != 9 || i != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
