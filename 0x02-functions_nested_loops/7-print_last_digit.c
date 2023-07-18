#include "main.h"

/**
 * print_last_digit - Hlkedijk mjijdcijijf jdij
 *
 * @r: fdhu jfdijb ifdhj int
 *
 * Return: lastdigit
*/

int print_last_digit(int r)
{
	int lastdigit;

	if (r < 0)
		lastdigit = -1 * (r % 10);

	else
		lastdigit = r % 10;

	_putchar(lastdigit + '0');

	return (lastdigit);
