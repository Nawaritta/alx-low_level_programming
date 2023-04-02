#include <stdio.h>
/**
 *main - enrty point
 *
 *Return: always 0
 */
int main(void)
{
	int i = 0;
	int sum = 23;

	for (i = 10; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
