#include "lists.h"

/**
 * free_list - nidudh hduhdu
 * @head: euefhu eihee
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->str;
		free(temp->str);
		free(temp);
	}
}
