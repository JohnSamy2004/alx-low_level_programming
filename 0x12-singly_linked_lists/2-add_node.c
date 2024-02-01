#include "lists.h"

/**
 * list_t *add_node - that adds new node in begining
 * @head: pointer to pointer on the head
 * @str: that will be duplicate in new node
 *
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

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
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
