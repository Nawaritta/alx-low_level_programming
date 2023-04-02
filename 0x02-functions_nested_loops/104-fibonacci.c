#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always zero
 */
int main(void)
{
	unsigned long fn_2 = 0;
	unsigned long fn_1 = 1;
	unsigned long fn;
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
			printf("%ld, ", fn);
		else
			printf("%ld\n", fn);
	}
	return (0);
}
