
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *multiply - multiplies two numbers
 *@num1: pointer to the first number
 *@num2: pointer to the second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, k, carry;
	int *mul = (int *)malloc(sizeof(int) * (len1 + len2));

	if (mul == NULL)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		mul[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
			carry = mul[i + j + 1] / 10;
			mul[i + j + 1] %= 10;
		}
		mul[i] += carry;
	}

	for (i = 0; i < len1 + len2 - 1; i++)
	{
		if (mul[i] != 0)
			break;
	}
	k = 0;

	for (; i < len1 + len2; i++)
		mul[k++] = mul[i];

	mul[k] = '\0';
	for (i = 0; i < k; i++)
		printf("%d", mul[i]);

	printf("\n");
	free(mul);
}
/**
 *_isdigit - checks if all the elements of an array are digits
 *@c: pointer to a pointer
 *@k: defines the array to check
 *@cv: valid char pointer
 *Return: pointer to a valid digits array
 */
char *_isdigit(char **c, int k, char *cv)
{
	unsigned int i = 0;
	int status = 98;


	cv =  malloc(sizeof(char) * strlen(c[k]));

	if (cv == NULL)
		exit(status);

	while (i < strlen(c[k]))
	{
		if (!isdigit(c[k][i]))
		{
			printf("Error\n");
			exit(status);
		}
		cv[i] = c[k][i];
		i++;
	}
	return (cv);
}
/**
*main - entry point
*@argc: The number of command line arguments
*@argv: An array containing the program command line arguments
*Return: zero
*/
int main(int argc, char **argv)
{
	int status = 98;
	char *n1 = NULL;
	char *n2 = NULL;

	if (argc != 3)
	{
		printf("Error\n");
		exit(status);
	}

	multiply(_isdigit(argv, 1, n1), _isdigit(argv, 2, n2));
	free(n1);
	free(n2);
	return (0);
}
