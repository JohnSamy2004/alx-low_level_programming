#include "main.h"

/**
 * print_square - kdnmk kfdji
 *
 * @size: ijdfij iji h iij
 *
 * Return: void
*/

void print_square(int size)
{
	int line, col;

	if (size <= 0)
		_putchar('\n');

	for (line = 0; line < size; line++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}


}
