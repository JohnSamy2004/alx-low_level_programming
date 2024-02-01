#include "lists.h"

/**
 * free_list - that's free all list
 * @head: begining the list
 *
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

}
