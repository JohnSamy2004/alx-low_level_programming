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
	char *vol = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (vol == NULL)
	{
		puts("failed to allocate memory");
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
			vol[i] = c;

	}

	return (vol);
}
