#include "variadic_functions.h"
/**
 * print_strings - print string
 * @separator: separator
 * @n: n of characters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s = NULL;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		printf("%s", s ? s : "(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
}
