#include "main.h"
/**
 *_strcmp - compares two string
 *@s1: first string
 *@s2: second string
 *Return: positive, negative or 0 value
 */
int _strcmp(char *s1, char *s2)
{
	char ret;
	int k = 0;

	while (s1[k] != '\0' && s1[k] == s2[k])
		k++;
	ret = s1[k] - s2[k];

	return (ret);
}
