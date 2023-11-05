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
	int *p = malloc(sizeof(char) * size);

	if (size == 0 || !size)
		return (NULL);

	else
		return (*p);
}
