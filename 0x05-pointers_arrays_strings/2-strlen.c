/**
 *_strlen - string length
 *@s: string type pointer
 *Return: lenght
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
}
