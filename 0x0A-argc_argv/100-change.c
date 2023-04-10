#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the min number of coins to make change for an amount of money
 *@argc: The number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int k;
	int cents;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");

	else {
		i = 0;
		k =0;

		while (cents > 0 && i < 5)
		{
			while (cents % coin[i] == 0)
			{
				cents -= coin[i];
				k++;
			}
			i++;
		}
		printf("%d\n", k);
	}

	return (0);
}
