#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of prefix substring
 * @s: string to check
 * @accept: accepted bytes
 * Return: returns usigned value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[j] == '\0')
			return (k);
	}
	return (k);
}
