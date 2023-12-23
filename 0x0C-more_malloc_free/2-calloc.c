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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
