#include <stdio.h>

/**
 *main - entry point
 *
 *Descriprtin
 *
 *Return: alway 0 (Success)
 */

int main(void)
{
int i;
int j;
int ii;
int jj;

for (ii = 0; ii < 10; ii++)
{
	for (jj = 0; jj < 9; jj++)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = jj + 1 ; j < 10; j++)
			{
				putchar((ii) + '0');
				putchar((jj) + '0');
				putchar(' ');
				putchar((i) + '0');
				putchar((j) + '0');
				if (j != 9 || i != 9 || jj != 8 || ii != 9)
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
