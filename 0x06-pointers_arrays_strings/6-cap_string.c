/**
 *cap_string - capitalizes all words of a string
 *@str: char as parameter
 *Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		if (j == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		j = 1;

		if (str[i] != ' ' || str[i] == '.' || str[i] == '\0')
			j = 0;
		i++;
	}
	return (str);
}
