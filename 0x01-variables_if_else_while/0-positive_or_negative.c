#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - 1-Describe random
 * Description: show if random is pos or neg
 * Return: 0, Always
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		printf("%d is %s", n, n > 0 ? "positive" : "negative");
		return (0);
}
