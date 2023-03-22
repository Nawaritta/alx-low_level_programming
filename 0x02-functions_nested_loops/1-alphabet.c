#include "main.h"
/**
 *print_alphabet - function that prints alphabet
 *@c: is a character to print
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
