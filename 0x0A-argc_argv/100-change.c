#include <stdio.h>
#include <stdlib.h>
/**
 * main - change
 * @argc: counter
 * @argv: valures
 * Return: 1 if the number of arguments is not 1, 0 Otherwise
 */
int main(int argc, char **argv)
{
	int cents = 0, i, change;
	const int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(*(argv + 1));
	if (change < 0)
		change = 0;
	i = 0;
	while (i < (int)(sizeof(coins) / sizeof(coins[0])))
	{
		if (change / coins[i] > 0)
		{
			cents++;
			change -= coins[i];
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", cents);
	return (0);
}
