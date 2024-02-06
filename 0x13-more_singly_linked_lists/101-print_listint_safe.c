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
	const listint_t *slow, *fast;
	size_t count = 0;

	if (!head)
		exit(98);
	slow = fast = head;

	else
	{
		while (fast && fast->next)
		{
			printf("[%p] %d\n", (void *)slow->next, slow->n);
			count++;

			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow->next, slow->n);
				exit(98);
			}
		}

	}
	/* if we reach at here means there is no loop*/
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	return (count);
}
