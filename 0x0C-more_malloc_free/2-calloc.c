#include "main.h"

/**
 * _calloc - this function same as calloc primary function
 *
 * @nmemb: numbers of array elements
 * @size: bytes of each element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
