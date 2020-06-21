#include <stdio.h>
/**
 * main - prime numbers
 * Return: 0 Always
 */
int main(void)
{
	/* const long INPUT = 1231952; */
	const long INPUT = 612852475143;
	long  n = INPUT;
	long div;

	do {
		div = 2;
		while (n % div != 0)
			div++;
		n /= div;
	} while (n != 1);
	printf("%ld\n", div);


	return (0);
}
