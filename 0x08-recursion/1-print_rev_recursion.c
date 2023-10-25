#include "main.h"

/**
 * _print_rev_recursion - ishdiuh bjcxzb uwgu
 *
 * @s: dshjhu dgsgygds sdfgfsf
 *
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

	else
	{
		_putchar('\n');
	}
}
