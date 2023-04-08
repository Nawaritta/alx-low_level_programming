#include "main.h"
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

	while (dest[k] != '\0')
		k++;

	while (k != -1)
	{
		dest[k] = src[i];
		if (src[i] == '\0')
			break;
		i++;
		k++;
	}
	return (dest);
}
