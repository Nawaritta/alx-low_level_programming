/**
 *puts2 - prints every other character
 *@str: point to a string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
