#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character c to stdout
 * @c: The character ro print
 *
 * Return: on success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
