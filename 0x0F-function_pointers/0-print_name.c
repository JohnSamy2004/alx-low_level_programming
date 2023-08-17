#include "function_pointers.h"

/**
 * print_name - ejjdije diejidjie
 *
 * @name: jidji
 * @f: jijf
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(char *name);
}
