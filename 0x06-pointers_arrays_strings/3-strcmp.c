/**
 *_strcmp - compares two string
 *@s1: first string
 *@s2: second string
 *Return: positive, negative or 0 value
 */
int _strcmp(char *s1, char *s2)
{
	int ret = 0;
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		k++;
		ret = s1[k] - s2[k];
	}

	return (ret);
}
