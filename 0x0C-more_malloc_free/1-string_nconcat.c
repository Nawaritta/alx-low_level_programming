#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*@s1: First string
*@s2: Second string
*@n: n bytes of s2
*Return: returns one string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 0;
	while (s1[len] != '\0')
		len++;

	s = malloc(sizeof(char) * n + len + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n + len; i++)
	{
		if (i < len)
			s[i] = s1[i];
		else
			s[i] = s2[i - len];
	}
	return (s);
}
