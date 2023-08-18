#include "variadic_functions.h"

/**
 * print_strings - prints numbers & new line at the end
 * @separator: string
 * @n: number of elements
 * @...: jdrjioe
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ab;
unsigned int i;
char *p;

va_start(ab, n);

for (i = 0; i < n; i++)
{

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
p = va_arg(ab, char *);
printf("%s", (p == 0) ? "(nil)" : p);
}
}
printf("\n");
va_end(ab);
}
