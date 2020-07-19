#include "variadic_functions.h"
/**
 * print_all - main print all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *pformat = format;
	int d;
	char c, *s;

	while (!format)
		return;
	va_start(ap, format);
	while (*pformat)
	{
		switch (*pformat++)
		{
			case 'c':              /* char */
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 's':              /* string */
				s = va_arg(ap, char *);
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			case 'i':              /* int */
				d = va_arg(ap, int);
				printf("%d", d);
				break;
			case 'f':              /* float */
				printf("%f", va_arg(ap, double));
				break;
			default:
				continue;
		}
		if (*(pformat))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
