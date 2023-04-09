#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds two numbers
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return: sum of two integers, 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int k;
	int sum = 0;
	int j;


	if (argc < 3)
		printf("0\n");

	else
	{
		for (; i < argc; i++)
		{
			if (argv[i][0] == '-')
				j = 1;
			else
				j = 0;

			for (; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			k = atoi(argv[i]);

			if (k > 0)
				sum += k;
		}
		printf("%d\n", sum);
	}
	return (0);
}
