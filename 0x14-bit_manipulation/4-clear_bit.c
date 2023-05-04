#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: unsigned long int
 * @index: the index of the bit to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((*n & (1 << index)) == 0)
		return (1);

	*n &= ~(1 << index);

	if ((*n & (1 << index)) == 0)
		return (1);

	return (-1);
}
