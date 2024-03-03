#include "lists.h"
/**
 * insert_dnodeint_at_index - that inserts a new node at a given position.
 * @h: pointer to pointer to main head
 * @idx: index starts at 0
 * @n: value
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *lol = *h;
	size_t count = 0;

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (count < idx - 1 && lol != NULL)
	{
		lol = lol->next;
		count++;
	}
	if (lol == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = lol->next;
	if (lol->next != NULL)
		lol->next->prev = new;
	lol->next = new;
	new->prev = lol;

	return (new);
}
