#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print
 *
 * @separator: sep
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
			printf("nil");
		else if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		else
			printf("%s", str);
	}
	printf("\n");

	va_end(args);
}
