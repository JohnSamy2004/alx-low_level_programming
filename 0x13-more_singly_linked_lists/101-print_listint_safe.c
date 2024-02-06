#include "lists.h"

/**
 * print_listint_safe - that prints a listint_t linked list.
 *
 * @head: points to head of list
 *
 * Return: the number of nodes in the list,
 * if the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current;

	if (!head)
		exit (98);
	else
	{
		current = head;
		while (current)
		{
			printf("[%p] %d\n", current->next, current->n);
			current = current->next;
		}
	}
}
