#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 *
 */
int main(int argc, char **argv)
{
	int (*op)(int, int);
	int a, b;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = (*get_op_func)(argv[2]);
/**
	if ((op == op_div || op == op_mod) && argv[3] == 0)
	{
		printf("Error");
		exit(98);
	}
*/
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = op(a, b);
	printf("%d\n",result);

	return (result);
}
