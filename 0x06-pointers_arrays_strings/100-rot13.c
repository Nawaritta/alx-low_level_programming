/**
 *rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: string
 */
char *rot13(char *s)
{
	char code[] = "abcdefghijklmnopqrstuvwxyznopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == code[j])
			{
				s[i] = code[j + 26];
				break;
			}
			if (s[i] == code[j] - 32)
			{
				s[i] = code[j + 26] - 32;
				break;
			}
		}
	}
	return (s);
}
