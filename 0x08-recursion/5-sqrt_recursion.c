#include "main.h"
#include "4-pow_recursion.c"
/**
 *helper - function solving the initialization prob of sq
 *@n: number for which the function checks for a square root
 *@sq: square root of n
 *Return: square root or -1
 */
int helper(int n, int sq)
{
	if (sq <= n)
	{
		if (_pow_recursion(sq, 2) != n)
			return (helper(n, ++sq));
		else
			return (sq);
	}

	return (-1);
}

/**
 *_sqrt_recursion - gives the natural square root of a number
 *@n: number
 *Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 0));
}
