/**
 * factorial - computes the factorial of a number
 *@n: int number
 *Return: factorial of a number
 */
int factorial(int n)
{
	if (n > 0)
	{
		n = n * factorial(n - 1);
			return (n);
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
