#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to pointer of main head
 * @n: the value
 * Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	dlistint_t *last;

	if (new == NULL)
		return NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
