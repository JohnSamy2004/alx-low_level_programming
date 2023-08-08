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
	int count = 0;

	if (*s != '\0')
	{
		count += _srtlen_recursion(s + 1) + 1;
	}

	return (count);
}
