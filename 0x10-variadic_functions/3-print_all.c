#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_c - prints a character
 * @a: list of arg
 * Return: zero
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}
/**
 * print_i - prints integers
 * @a: list of arg
 * Return: zero
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}
/**
 * print_f - prints float
 * @a: list of arg
 * Return: zero
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}
/**
 * print_s - prints strings
 * @a: list of arg
 * Return: zero
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - prints all the previous data type
 * @format: dfines the type of the arg
 *
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separ = "";
	char *separat = ", ";
	va_list args;
	print typ[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;

	while (format != NULL && format[i])
	{
		j = 0;
		while (typ[j].f != NULL)
		{
			if (format[i] == *(typ[j].c))
			{
				printf("%s", separ);
				typ[j].f(args);
			}
			j++;
		}
		separ = separat;
		i++;
	}
	printf("\n");
	va_end(args);
}
