#include "lists.h"

/**
 * add_nodeint - add new node of int in the begining
 *
 * @head: pointer to struct
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listsint_t));
	new_node->n = n;

	if (*head == NULL)
		return (NULL);
	else
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
}
