#include "main.h"

/*
 * _puts_recursion - puts using a recursion function
 *
 * @s: array of characters
 *
 * Return: char s
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}

	_putchar('\n');
}
