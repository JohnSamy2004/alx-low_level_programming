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
	unsigned int i;
	char *vol;

	if (size == 0)
	{
		return (NULL);
	}

	vol = malloc(size * sizeof(char));

	if (vol == NULL)
	{
		puts("failed to allocate memory");
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
		vol[i] = c;


	return (vol);
}
