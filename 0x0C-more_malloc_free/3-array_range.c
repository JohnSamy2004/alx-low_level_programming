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

	if (min >= max)
		return (NULL);

	arr = malloc((max + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i <= max; i++)
		arr[i] = min + i;

	return (arr);
}
