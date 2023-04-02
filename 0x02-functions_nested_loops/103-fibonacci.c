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
	unsigned long fn = 0;
	unsigned long sum_even = 0;
	int i = 0;
	int j = 1;

	while (j)
	{
		if (fn % 2 == 0)
			sum_even += fn;

		while (i < j)
		{
			fn = fn_1 + fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
			i++;
		}
		if (fn >= 4000000)
			break;
		j++;
	}
	printf("%ld\n", sum_even);
	return (0);
}
