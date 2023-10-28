#include <unistd.h>

/**
 * _putchar - Function that prints a character to the stdout
 *
 * @c: The character to print
 *
 * Return: The number of characters printed to the stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
