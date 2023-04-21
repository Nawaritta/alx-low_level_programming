#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Structure operation
 * @op: The operator
 * @fct: The associated function
 */
typedef struct op
{
	char *op;
	int (*fct)(int, int);
} op_t;
#endif