#include "lists.h"

/**
 * free_dlistint - that frees a dlistint_t list.
 *
 * @head: points to head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
