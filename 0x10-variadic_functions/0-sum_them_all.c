#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - lldjjdjfijfjf
 *
 * @n: jrijri
 *
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;

	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
