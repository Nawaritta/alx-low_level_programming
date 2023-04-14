#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@s1: First string
*@s2: Second string
*@n: n bytes of s2 at least/at most
*Return: returns one string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len = 0;
	unsigned int len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	s = malloc(sizeof(char) * (n + len) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n + len; i++)
	{
		if (i < len)
			s[i] = s1[i];
		else
			s[i] = s2[i - len];
	}
	s[i] = '\0';
	return (s);
}
