#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always
 */
int main(void)
{
	int i = 3;
	long n = 612852475143;

	while (i != n)
	{
		if (n % i == 0)
		{
			n = n / i;
		} else
			i++;
	}
	printf("%ld\n", n);
	return (0);
}
