#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *@argc: number of arguments
 *@argv: arguments passed to the program
 *Return: zero
 */
int main(int argc, char **argv)
{
	int (*fct)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fct = (*get_op_func)(argv[2]);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", fct(a, b));

	return (0);
}
