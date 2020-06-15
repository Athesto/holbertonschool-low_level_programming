#include "holberton.h"
/**
 * main - PrintHolberton
 * Return: 0 Always
 */
int main(void)
{
	char hol[] = "Holberton\n";
	int i;

	i = 0;
	while (hol[i])
	{
		_putchar(hol[i++]);
	}
	return (0);
}
