#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - get function
 * @s: operator passed
 *
 * Description: selects the correct function to
 * perform the operation asked by the user
 * Return: pointer to the operation
 */
int (*get_op_func(char *s))(int a, int b)
{

	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
