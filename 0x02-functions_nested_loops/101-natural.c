#include <stdio.h>
/**
 * main - sum naturals
 * Return: 0
 */
int main(void)
{
	int counter, sum;
	const int MAXNUM = 1024;

	sum = 0;
	counter = 0;
	while (counter < MAXNUM)
	{
		if ((counter % 3 == 0) || (counter % 5 == 0))
			sum += counter;
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
