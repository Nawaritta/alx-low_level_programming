#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always zero
 */
int main(void)
{
	float fn_2 = 1;
	float fn_1 = 2;
	float fn = fn_1 + fn_2;
       	int j = 3;

	printf("%.0f, %.0f, ", fn_2,fn_1);

	while (j <= 98)
	{
		if (j != 98)
			printf("%.0f, ", fn);
		else
			printf("%.0f\n", fn);

		fn_2 = fn_1;
		fn_1 = fn;
		fn = fn_1 + fn_2;

		j++;
	}
	return (0);
}
