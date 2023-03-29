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

	char *concat = &dest[0];

	while (concat[k] != '\0')
	{
		k++;
	}
	do {
		concat[k] = src[i];
		dest[k] = src[i];
		i++;
		k++;
	} while (src[i] != '\0' && i < n);
	return (concat);
}
