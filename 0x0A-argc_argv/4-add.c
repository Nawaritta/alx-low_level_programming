#include <stdio.h>
#include <stdlib.h>
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

	if (argc < 2)
		printf("%d\n",0);

	else
	{
		for (; i < argc; i++)
		{

			k = atoi(argv[i]);
			if (k != 0 && k >= 0)
				sum += k;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
