#include "main.h"
/**
 * malloc_checked - ckeck if malloc not equal null
 *
 * @b: unsigned integer
 *
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (!s)
		exit(98);

	return (s);
}
