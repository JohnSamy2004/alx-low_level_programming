#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodet at index of listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node should be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *free_temp;
	unsigned int i;

	if (*head == 0)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1 && temp->next != NULL; i++)
			temp = temp->next;
		if (temp->next == NULL)
			return (-1);
		free_temp = temp->next;
		temp->next = temp->next->next; /*"OR" free_temp->next*/
		free(free_temp);
		return (1);
	}
}
