#include <stdio.h>

/**
 * main - entry point
 *
 *Description : base 16
 *
 *
 *Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 16 ; i++)
	{
	printf("%x", i);
	}
	putchar('\n');
	return (0);
}
