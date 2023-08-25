#include "lists.h"

/**
 * print_list - ijdieiedj ehdehdihe
 * 
 * @h: jeijeif eidjije ndeejdie
 *
 * Return: num
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->string != NULL)
			printf("[%d]%s\n", h->length, h->string);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}
	return (counter);
}
