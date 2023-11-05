#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array
 *
 * @size: take a size
 * @c: take a character
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
