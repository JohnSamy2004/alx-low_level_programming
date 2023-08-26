#include "lists.h"

/**
 * list_len - koorjrfi irijri jjrijrf
 * @h: jijij jijjde jiji jijkldo
 *
 * Return: elements
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++)
		h = h->next;

	return (elements);
}
