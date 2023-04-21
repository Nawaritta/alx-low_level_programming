#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - adds adds two numbers
 * @a: int a
 * @b: int b
 * Return: a sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: int a
 * @b: int b
 * Return: a substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: int a
 * @b: int b
 * Return: a product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two int
 * @a: int a
 * @b: int b
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - devides two int and returns th remainder
 * @a: int a
 * @b: int b
 * Return: remainder of a division
*/
int op_mod(int a, int b)
{
	return (a % b);
}
