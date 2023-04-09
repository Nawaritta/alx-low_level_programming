#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return:  0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int k = 2;
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	} else
	{
		mul = atoi(argv[k]) * atoi(argv[i]);
		printf("%d\n",mul);
	}
	return (0);
}
