#ifndef main.h
#define main.h
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
/**
 *print_alphabet - function that prints alphabet
 *@c: is a character to print
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case
 *
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 *@c: is a letter, lowercase or uppercase
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer inputed
 * Return: abs value of int
 */
int _abs(int);
/**
 * print_last_digit - prints last digit
 *
 * @int: integer to treat
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table
 *
 *
 */
void times_table(void);
/**
 * add - adds two integers
 * @int: two integers to add
 * Return: returns an addition
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: beginning number
 *
 */
void print_to_98(int n);
#endif
