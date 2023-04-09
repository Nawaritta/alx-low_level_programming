#include <stdio.h>
/**
 *main - prints all the arguments
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
