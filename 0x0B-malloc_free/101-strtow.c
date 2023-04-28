#include "main.h"
#include <stdlib.h>

/**
 *strtow - splits a string into words.
 *@str: the string to split
 *Return: pointer to an array of string
 */
char **strtow(char *str)
{
	int i, j, c, word;
	int k = 0;
	char **w = NULL;

	if (str == NULL)
		return (NULL);
	else if (str[0] == '\0')
		return (NULL);

	c = 0;
	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				c++;
				i++;
			}
			w[word] = (char *)malloc(sizeof(char) * (c + 1));
			w[word][0] = c;
			c = 0;
			word++;
		} else
			while (str[i] == ' ')
				i++;
       	}

	if (w == NULL)
		return (NULL);

	for (i = 0; i < word; i++)
	{
		c = w[i][0];

		for (j = 0; j <= c; j++)
		{
			if (str[k] != ' ' && j < c)
			{
				w[i][j] = str[k];
				k++;
			}
			if (j == c)
				w[i][j] = '\n';
		}
	}
	return (w);
}

#include <stdlib.h>

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
		return NULL;

	int i, j, c, word, k = 0;
	char **w = NULL;

	// Count the number of words
	for (i = 0, word = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word++;
	}

	// Allocate memory for the array of string pointers
	w = (char **)malloc(sizeof(char *) * (word + 1));
	if (w == NULL)
		return NULL;

	// Split the string into words and allocate memory for each word
	for (i = 0, word = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
			for (c = 0; str[i + c] != ' ' && str[i + c] != '\0'; c++);
			w[word] = (char *)malloc(sizeof(char) * (c + 1));
			if (w[word] == NULL) {
				// Free memory for previously allocated words
				for (j = 0; j < word; j++)
					free(w[j]);
				free(w);
				return NULL;
			}
			for (j = 0; j < c; j++) {
				w[word][j] = str[i + j];
			}
			w[word][j] = '\0';
			word++;
			i += c;
		}
	}
	w[word] = NULL;
	return w;
}
