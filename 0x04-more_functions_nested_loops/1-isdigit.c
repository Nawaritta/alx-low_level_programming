/**
 * _isdigit - function is digit
 *
 * @c: character to treat
 *
 * Return: 1 if it is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
