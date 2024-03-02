#include "lists.h"

/**
 * get_dnodeint_at_index - that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer of head
 * @index: index of the node to return
 * Return: the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (!head)
	{
		return (NULL);
	}

	while (count < index && head != NULL)
	{
		head = head->next;
		count++;
	}
	return (head);
}
