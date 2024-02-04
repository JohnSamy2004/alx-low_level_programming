#include "lists.h"

/**
 * listint_len - prints length of list
 *
 * @h: pointer to structure
 *
 * Return: count
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
