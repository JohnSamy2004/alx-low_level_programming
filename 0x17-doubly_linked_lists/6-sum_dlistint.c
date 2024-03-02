#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: points to main head
*/
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}

	}
	return (sum);
}
