/**
 *_strncat - string concatenation 2
 *@dest: first string
 *@src: second string
 *@n: number of characters to take from the second string
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n)
	{
		dest[k]=src[k];
		if (src[k] == '\0')
			break;
		k++;
	}
	return (dest);
}
