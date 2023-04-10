#include "main.h"
#include "4-pow_recursion.c"
/**
 *_sqrt_recursion - gives the natural square root of a number
 *@n: number
 *Return: square root or -1
 */
int helper(int n, int sq)
{
	if (sq <= n)
	{
		if (_pow_recursion(sq, 2) != n)
			return (helper(n,sq+1));
		else
			return (sq);
	}

	return (-1);
}
int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}
