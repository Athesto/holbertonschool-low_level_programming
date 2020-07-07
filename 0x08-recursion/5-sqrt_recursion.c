/**
 * _sqrt_recursion - return square root of input (n)
 * @n: integer to sqrt
 * Return: sqrt of integer, -1 if (n) has no sqrt
 */

int _sqrt_recursion(int n)
{
	static int n_sta = 1;
	int n_return;

	if (n_sta * n_sta == n)
	{
		n_return = n_sta;
		n_sta = 1;
		return (n_return);
	}
	else if (n_sta > n / 2)
	{
		n_return = n_sta;
		n_sta = 1;
		return (-1);
	}
	n_sta++;
	return (_sqrt_recursion(n));
}
