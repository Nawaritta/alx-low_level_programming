#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
			return(1);
	} else if (n < 0)
	{
		printf("%d is negative", n);
		return(-1);
	} else
	{
		printf("%d is zero", n);
		return(0);
	}
	printf("\n");
}
