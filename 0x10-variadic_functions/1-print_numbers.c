#include "variadic_functions.h"
/**
 * print_numbers - print  prints numbers, followed by a new line
 * @n: number of strings
 * @separator: separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	if (!separator)
	{
		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(lista, int), (i < (n - 1)) ? separator : "\n");
		}
		va_end(lista);
	}
}
