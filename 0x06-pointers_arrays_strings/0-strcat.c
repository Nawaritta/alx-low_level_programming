/**
 *_strcat - string concatenation
 *@dest: first string
 *@src: second string
 *Return: string
 */
char *_strcat(char *dest, char *src)
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
	} while (src[i] != '\0');
       
	return (concat);
}
