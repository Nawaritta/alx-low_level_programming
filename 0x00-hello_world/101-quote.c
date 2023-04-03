#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: always 1 (Failure)
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
	return (1);
}
