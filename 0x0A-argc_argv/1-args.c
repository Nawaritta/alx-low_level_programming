#include <stdio.h>
/**
 *main - prints the number of arguments passed into it.
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (argv[0] - argv[0]);
}
