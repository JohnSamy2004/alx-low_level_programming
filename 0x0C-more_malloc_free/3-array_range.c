#include "main.h"

/**
 * array_range - array range
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: arr as a pointer
 */

int *array_range(int min, int max)
{
	int *arr, i;
	size_t size = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(*arr));

	if (!arr)
		return (NULL);

	for (i = 0; i <= size; i++)
		arr[i] = min + i;

	return (arr);
}
