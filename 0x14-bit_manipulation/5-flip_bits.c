/**
 * flip_bits - returns the number of bits that need to be flipped to convert
 *             one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		bits += diff & 1;
		diff >>= 1;
	}

	return (bits);
}
