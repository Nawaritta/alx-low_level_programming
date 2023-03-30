/**
 *cap_string - capitalizes all words of a string
 *@str: char as parameter
 *Return: string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
	   		str[i] = str[i] - 32;
		while (str[i] != ('\t' && '\n' && ' ' && '.' && ';' && ',' && '(' && ')' && '{' && '{' && '?' && '!' && '"'))
			i++;

		i++;
	}
	return (str);
}
