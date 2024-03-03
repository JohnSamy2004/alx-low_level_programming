#include "lists.h"
/**
 * delete_dnodeint_at_index - hat deletes the node at index
 * of a dlistint_t linked list.
 * @head: points to main head
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *tmp = *head;
	dlistint_t *t1 = NULL;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (!*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	if (!tmp)
		return (-1);
	while (count < index - 1 && tmp != NULL)
	{
		t1 = tmp;
		tmp = tmp->next;
		count++;
	}
	if (tmp && count == index - 1)
	{
		t1->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = t1;
		free(tmp);
		return (1);
	}
	return (-1);
}
