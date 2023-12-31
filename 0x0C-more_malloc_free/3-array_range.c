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
	int *arr, i, j = 0;
	size_t size = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(*arr));

	if (!arr)
		return (NULL);
	if (min == max)
		arr[0] = min;

	else
	{
		for (i = 0; i < (max - min); i++)
		{
			arr[j] = min + i;
			j++;
		}
	}

	return (arr);
}
