#include "function_pointers.h"

/**
 * array_iterator - idcjidnbhr  djdiejdld
 *
 * @array: feijeij
 * @size: frjifj
 * @action: ejifjie
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}

	}
}
