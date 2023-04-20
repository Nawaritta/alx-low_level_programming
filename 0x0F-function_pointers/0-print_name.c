#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: name to print
 * @f: pointer to the function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name == '\0' || f == NULL)
		exit(98);
	(*f)(name);
}
