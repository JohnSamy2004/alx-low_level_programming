#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - ddfjofrfjrjiirfi foo
 *
 * @size: kkk
 * @c: djidji
 *
 * Return: pointer
 */


char *create_array(unsigned int size, char c)
{
	char *vol = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		for (int i = 0; i < size; i++)
		{
			vol[i] = c;
		}

	}

	return (vol);
}
