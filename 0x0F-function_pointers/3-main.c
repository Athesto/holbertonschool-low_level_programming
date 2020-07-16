#include "3-calc.h"
#include <string.h>
#include <stdio.h>
/**
 * main - a program that performs simple operations
 * @c: operands always 4
 * @v: string of values num1, operator, num2
 * Return: 0 Always
 */
int main(int c, char *v[])
{
	int result;
	int (*p_result)();

	if (c != 4 || strlen(v[2]) != 1)
	{
		printf("Error\n");
		return (0);
	}
	p_result = get_op_func(v[2]);

	if (p_result)
		result = p_result(atoi(v[1]), atoi(v[3]));
	else
		return (0);
	printf("%d\n", result);

	return (0);
}
