#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: returns one string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int k, j;
	char *concat;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}

	k = i;
	if (s2 != NULL)
	{
		while (s2[i - k] != '\0')
			i++;
	}

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	concat = malloc(sizeof(char) * i + 1);

	if (concat == NULL)
		return (NULL);

	j = 0;
	for (; j < i; j++)
	{
		if (j < k)
		{
			concat[j] = s1[j];
		}
		if (j >= k)
		{
			concat[j] = s2[j - k];
		}
	}
	return (concat);
}
