#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arry of pointers to command line argument strings
 *Return: String or NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, c;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac ; i++)
		for (j = 0; av[i][j] == '\0'; j++)
			c++;

	str = (char *)malloc(sizeof(char *) * (c + 1));

	if (str == NULL)
		return (NULL);

	c = 0;
	for (i = 1; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[c] = av[i][j];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
