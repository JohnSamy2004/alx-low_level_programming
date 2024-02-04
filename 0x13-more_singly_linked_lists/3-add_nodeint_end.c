#include "lists.h"

/**
 * add_nodeint_end - adds node integer
 *
 * @head: points to struct
 * @n: data of int type
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *last;

	newnode->n = n;
	newnode->next = NULL;
	if (newnode)
	{
		if (!*head)
		{
			*head = newnode;
			return (newnode);
		}
		else
		{
			last = *head;

			while (last->next != 0)
			{
				last = last->next;
			}
			last->next = newnode;

			return (newnode);
		}
	}
		free(newnode);
		return (NULL);
}
