#include "main.h"

/**
 * malloc_checked - hufu4bd buebd ndeiej3idru
 *
 * @b: jiji4jdi4jie
 *
 * Return: pointer
 */


void malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(sizeof(b));

	if (array == 0)
		exit(98);

	return(array);
}
