#include "main.h"

/*
 * _puts_recursion - puts using a recursion function
 *
 * @s: array of characters
 * 
 * Return: char s
 */

void _puts_recrusion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s++);
		_putchar(*s);
	}

	_putchar('\n');
}
