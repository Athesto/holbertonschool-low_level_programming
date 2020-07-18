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

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, int));
		if (separator)
			printf("%s", (i < (n - 1)) ? separator : "\n");
	}
	va_end(lista);
}
