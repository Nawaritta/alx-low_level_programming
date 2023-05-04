#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - sets the value of a bit to 1
 * @n: unsigned long int
 * @index: index of the bit
 * Return: return 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	(*n) |= 1 << index;

	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
