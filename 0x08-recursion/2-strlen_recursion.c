#include "main.h"

/**
 * _strlen_recursion - fdjhuh ugsdb
 *
 * @s: hdbshb hdsgvh hkj
 *
 * Return: count
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s)
	{
		_strlen_recursion(s / 10);
		count++;
	}

	return (count);
}
