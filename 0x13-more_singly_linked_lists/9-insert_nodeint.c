#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint list
 * @idx: is the index of the list where the new node should be added
 * @n: is the data
 * Return: Null if it failed or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i;

	new_node->n = n;

	if (!new_node)
		return (NULL);
	if (!*head || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1 && temp; i++)
	{
		temp = temp->next;
	}
	new_node->next = temp;
	temp->next = new_node;

	return (new_node);
}
