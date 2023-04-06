#include "main.h"
#include "4-pow_recursion.c"
/**
 *_sqrt_recursion - gives the natural square root of a number
 *@n: number
 *Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	int sq = 0;

	while(sq <= n)
	{
		if (_pow_recursion(sq, 2) != n)
			sq++;
		else
			return (sq);
	}

	return (-1);
}
