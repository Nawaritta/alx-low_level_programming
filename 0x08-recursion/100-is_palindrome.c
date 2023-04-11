#include "2-strlen_recursion.c"
/**
 *is_palindrome - checks if a number is palindrome
 *@s: to check
 */
int hel_per(char *s, char *a)
{
	if (*s == *a)
	{
		if (&s == &a)
		{
			return (1);
		}
		return (hel_per(++s,--a));
	}
	return (0);
}

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *a = &s[len - 1];

	if (*s == '\0')
		return (1);

	return (hel_per(s,a));
}
