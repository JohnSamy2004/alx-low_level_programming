#include "main.h"
/**
 * malloc_checked - ckeck if malloc == null
 *
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (!s)
		exit (98);
	return (s);
}
