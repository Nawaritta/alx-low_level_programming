#include <stdlib.h>

char **strtow(char *str)
{
	int i;
	int j;
	int c;
	int word;
	char **w = NULL; 

	if (str == NULL || str[0] == '\0')                                                                                                                        return NULL; 
	
	
	for (i = 0, word = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word++;
	}

	
	w = (char **)malloc(sizeof(char *) * (word + 1));
	if (w == NULL)
		return NULL;

	
	for (i = 0, word = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
			for (c = 0; str[i + c] != ' ' && str[i + c] != '\0'; c++);
			w[word] = (char *)malloc(sizeof(char) * (c + 1));
			if (w[word] == NULL) {
				
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
