#include <stdio.h>
/**
 *main - entry point
 *
 *return: always zero
 */
 int main(void)
 {
 	int fn_2 = 0;
 	int fn_1 = 1;
 	int fn;
	int i = 0;
	int j = 1;

	for (; j <= 50; j++)
	{
		while (i < j)
		{
			fn = fn_1 + fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
			i++;
		}
		if (j != 50)
			printf("%d, ", fn);
		else
			printf("%d\n", fn);
	}
 	return (0);
 }
