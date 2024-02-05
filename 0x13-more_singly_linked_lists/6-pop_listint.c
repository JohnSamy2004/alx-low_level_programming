#include "lists.h"

/**
 * pop_listint - that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: double pointer to head of list
 *
 * Return:  the head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
