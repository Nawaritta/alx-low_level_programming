#include "main.h"
/**
 *_strncpy - string concatenation 2
 *@dest: first string
 *@src: second string
 *@n: number of characters to take from the second string
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;
	int j;

	for (; k < n; k++)
	{
		dest[k] = src[k];
		if (src[k] == '\0')
		{
			j = k;
			break;
		}
	}
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
