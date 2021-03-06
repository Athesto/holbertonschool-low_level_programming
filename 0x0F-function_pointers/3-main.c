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
	int result, a, b;
	int (*p_result)();

	if (c == 4)
	{
		a = atoi(v[1]);
		b = atoi(v[3]);
		p_result = get_op_func(v[2]);
		if (p_result && strlen(v[2]) == 1)
		{
			if (!((*v[2] == '/' || *v[2] == '%') && b == 0))
			{
				result = p_result(a, b);
				printf("%d\n", result);
				return (0);
			}
			printf("Error\n");
			return (100);
		}
		printf("Error\n");
		return (99);
	}
	printf("Error\n");
	return (98);
}
