#include "2-strlen_recursion.c"
/**
 *is_palindrome - checks if a number is palindrome
 *@s: to check
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int k;

	if (len % 2)
		k = len / 2;
	else
		k = (len + 1) / 2;

	if (*s && s != &s[k])
	{
		if (*s != s[--len])
			return (0);
		else
			is_palindrome(++s);
	}
	return (1);
}
