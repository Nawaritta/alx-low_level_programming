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
	for (jj = 0; jj < 10; jj++)
	{
		if (jj < 9)
			i = ii;
		else
			i = ii + 1;
		while (i < 10)
		{
			if (i == ii)
				j = jj + 1;
			else
				j = 0;
			while (j < 10)
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
				j++;
			}
			i++;
		}
	}
}
putchar('\n');
return (0);
}
