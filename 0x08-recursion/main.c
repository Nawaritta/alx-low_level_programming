#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_prime_number(2);
	printf("%d\n", r);
	r = is_prime_number(4);
	printf("%d\n", r);
	return (0);
}
