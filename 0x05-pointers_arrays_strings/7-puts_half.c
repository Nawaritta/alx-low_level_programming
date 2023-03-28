/**
 *puts_half(char *str)- print half of a string
 *@str: point to a string
 */
void puts_half(char *str)
{
	int n;
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
