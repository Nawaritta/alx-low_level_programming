#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	char qt[70] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	i = 0;
	do {
		putchar(qt[i]);
		i++;
	} while (i < strlen(qt));

	return (0);
}
