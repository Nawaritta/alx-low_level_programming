#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *main - multiplies two numbers
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return:  product of two numbers
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 2;
	int k, ln1, ln2;
	int status = 98;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(status);
	}
	ln1 = strlen(argv[i]);
	ln2 = strlen(argv[j]);
	k = ln1 - 1;

	if (ln2 > k)
		k = ln2 - 1;

	while (k + 1)
	{
		if ((k <= ln1 && !isdigit(argv[i][k])) || (k <= ln2 && !isdigit(argv[j][k])))
		{
			printf("Error\n");
			exit(status);
		}
		k--;
	}




	mul = atoi(argv[j]) * atoi(argv[i]);
	printf("%d\n", mul);

	return (0);
}
