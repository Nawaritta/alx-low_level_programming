#include "main.h"

/**
 * binary_to_uint - converts a binary number to an integer
 * @b: pointer to the binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int i, Int = 0;
	size_t len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			Int = Int * 2 + (b[i] - '0');
		else
			return (0);
	}

	return (Int);
}
