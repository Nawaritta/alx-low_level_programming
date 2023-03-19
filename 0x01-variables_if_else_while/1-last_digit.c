#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld < 6 || ld != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0", n, ld);
	}
	else if (ld > 5)
	{
		printf("Last digit of %d and is greater than 5", n);
	}
	else
	{
	printf("is 0 and is 0");
	}
	printf("\n");
	return (0);
}
