#include "main.h"
/**
 * print alpha - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	char a;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 'a'; a < = 'z' ; a++)
		{
		putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
