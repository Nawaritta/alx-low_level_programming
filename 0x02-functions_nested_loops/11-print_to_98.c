#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: beginning number
 *
 */
void print_to_98(int n)
{
	int z = n;

	while (z != 98)
	{
		printf("%d, ", z);
		if (z < 98)
			z++;
		else
			z--;
	}
	printf("%d\n",z);
}
