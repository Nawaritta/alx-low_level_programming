void print_before_main(void) __attribute__ ((constructor));
#include <stdio.h>

/**
 * print_before_main - prints a message before main function is executed
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
