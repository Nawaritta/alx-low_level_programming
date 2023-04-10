#include "main.h"
/**
 *helper - function helper
 *@n: potential prime number
 *@d: devider
 *Return: 0 or 1
 */
int helper(int n, int d)
{
	if (d < n)
	{
		if (n % d == 0)
			return (0);
		else
			return (helper(n, ++d));
	}
	return (1);
}

/**
 *is_prime_number - prime number check
 *@n: number to check if it is prime
 *Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (helper(n, 2));
}
