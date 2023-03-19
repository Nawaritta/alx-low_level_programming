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

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (j != 9 || i != 8)
			{
				putchar((i) + '0');
				putchar((j) + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
