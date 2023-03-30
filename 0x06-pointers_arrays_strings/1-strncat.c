/**
 *_strncat - string concatenation 2
 *@dest: first string
 *@src: second string
 *@n: number of characters to take from the second string
 *Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int i = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (i < n)
	{
		dest[k] = src[i];
		if (src[i] == '\0')
			break;
		i++;
		k++;
	}
	return (dest);
}
