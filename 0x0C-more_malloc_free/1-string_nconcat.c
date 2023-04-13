#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - concatenates two strings
*@s1: First string
*@s2: Second string
*@n: n bytes of s2 at least/at most
*Return: returns one string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;

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
