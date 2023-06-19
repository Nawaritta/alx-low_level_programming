#include "main.h"
/**
 * _islower - prints if c is lower case
 *@c: int number
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
