#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - copies a string
 * @str: string to copy
 * Return: pointer to the string's duplica
 */
char *_strdup(char *str)
{
	int i;
	char *cpy;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	cpy = malloc(sizeof(char) * i);

	if (cpy == NULL)
		return (NULL);

	while (i)
	{
		cpy[i - 1] = str[i - 1];
		i--;
	}
	return (cpy);
}
