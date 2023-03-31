/**
 *cap_string - capitalizes all words of a string
 *@str: char as parameter
 *Return: string
 */
char *cap_string(char *str)
{
	int i = 0;
	int bool;
	int j;
	char separat[] = "\t\n .;,(){}?!\"";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		bool = 0;
		while (bool == 0)
		{
			for (j = 0; separat[j] != '\0'; j++)
			{
				if (str[i] == separat[j])
				{
					bool = 1;
					break;
				}
			}
			i++;
		}
	}
	return (str);
}
