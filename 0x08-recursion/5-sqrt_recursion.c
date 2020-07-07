/**
 * _sqrt_recursion - return square root of input (n)
 * @n: integer to sqrt
 * Return: sqrt of integer, -1 if (n) has no sqrt
 */

int _sqrt_recursion(int n)
{
	static int root_sta = 1, tmp;		/*static variables keeps
										 *the value in recurtion
										 */
	if (root_sta * root_sta == n)
	{
		tmp = root_sta;					/*save and reset root_sta*/
		root_sta = 1;
		return (tmp);
	}
	else if (root_sta > n / 2)			/*after n/2 there is no sqrt*/
	{
		root_sta = 1;					/*reset static variable*/
		return (-1);
	}
	root_sta++;
	return (_sqrt_recursion(n));
}
