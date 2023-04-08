/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source from which to copy
 * @n: n unsigned int
 * Return: return a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
