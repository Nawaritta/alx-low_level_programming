/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: string
 */
char *leet(char *s)
{
	char code[] = "aeotl43071";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == code[j] || s[i] == code[j] - 32)
			{
				s[i] = code[j + 5];
				break;
			}
		}
	}
	return (s);
}
