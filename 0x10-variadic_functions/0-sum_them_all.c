#include "variadic_functions.h"
/**
 * sum_them_all - main
 * @n: input
 * Return: 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	int suma = 0;
	unsigned int i;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		suma += va_arg(lista, int);
	}
	va_end(lista);
	return (suma);
}
