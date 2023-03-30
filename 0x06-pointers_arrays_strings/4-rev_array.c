/**
 *reverse_array - reverses an array
 *@a: an array of integers to revers
 *@n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;
	int stemp;

	if (n % 2)
		k = n / 2;
	else
		k = (n + 1) / 2;
	i = 0;

	while (i < k)
	{
		stemp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = stemp;
		i++;
	}
}
