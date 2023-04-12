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
	int k;
	char *concat;

	while (s1[i])
		i++;
	k = i;

	while (s2[i - k])
		i++;

	concat = malloc(sizeof(char) * i + 1);

	if (concat == NULL)
		return (NULL);

	if (i == 0)
		return (NULL);

	while (i >= 0)
	{
		if (i - k >= 0)
		{
			concat[i] = s2[i - k];
			 i--;
		}
		if (i < k)
		{
			concat[i] = s1[i];
			i--;
		}
	}
	return (concat);
}
