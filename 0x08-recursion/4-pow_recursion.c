#include "main.h"

/*
 * _pow_recursion - power using rec
 *
 * @x: integer
 * @y: counter
 *
 * Return: power using recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else
		return(x * _pow_recursion(x, y - 1));
}
