#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 *
 * @head: pointer to struct
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list,
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *tail;
	int sum = 0;

	if (!head)
		return (0);

	tail = head;
	while (tail->next != NULL)
	{
		sum = sum + tail->n;
		tail = tail->next;
	}
	return (sum);
}
