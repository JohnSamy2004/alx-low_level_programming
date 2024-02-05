#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the listint_t list
 * @index: the index of the node starting at 0
 * Return: the nth node of listint_t or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	if (!head)
		return (NULL);

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (i != NULL || !temp)
		return (NULL);
	return (temp);
}
