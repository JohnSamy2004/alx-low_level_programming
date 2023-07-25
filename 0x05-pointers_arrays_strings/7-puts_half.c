#include "main.h"

/**
 * puts_half - sdkjm ljnlk dsklkmklms
 *
 * @str: jdikjdikj dvgf
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int i, j, n;

	j = 0;


	while (str[j] != '\0')
	{
		j++;
	}

		n = (j - 1) / 2;
		_putchar(str[n]);
		_putchar('\n');
}
