#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: beginning number
 *
 */
void print_to_98(int n)
{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i <= 98)
			printf(" ,");
	}
	putchar('\n');
}
