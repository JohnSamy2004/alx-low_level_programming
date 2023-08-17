#include "function_pointers.h"

/**
 * int_index - ijifrij
 *
 * @array: ijfei
 * @size: difhier
 * @cmp: ijefi
 *
 * Return: -1
 */


int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (size > 0)
	{
		if (array && size && cmp)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
