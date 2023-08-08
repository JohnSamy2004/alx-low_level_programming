#include "main.h"

/**
 * _print_rev_recursion - sbjkkjms hjdsagkhv sadhufg
 *
 * @s: dskljn gbsdyhgb k vda
 *
 * Return: reverse s
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
		_putchar('\n');
	}
}
