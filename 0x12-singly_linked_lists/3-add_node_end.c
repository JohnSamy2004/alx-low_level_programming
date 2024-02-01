#include "lists.h"

/**
 * list_t *add_node_end - that adds new node at the end
 * @head: pointer to pointer on the head
 * @str: that will be duplicate in new node
 *
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tail;

	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
