#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always zero
 */
int main(void)
{
	unsigned int fn_2 = 0;
	unsigned int fn_1 = 1;
	unsigned int fn;
	int i = 0;
	int j = 1;

	for (; j <= 98; j++)
	{
		while (i < j)
		{
			fn = fn_1 + fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
			i++;
		}
		if (j != 98)
			printf("%u, ", fn);
		else
			printf("%u\n", fn);
	}
	return (0);
}
