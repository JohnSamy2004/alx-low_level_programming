#include "lists.h"

/**
 * free_listint - that's free list
 *
 * @head: points to head of list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
