/** bonus 101-print_listint_safe.c */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a `listint_t` linked list including mem addresses
 * @head: a head of linked list
 * Description: Go through the list only once.
 * Return: a number of nodes in list. If fails, exit with status 98.
 * drewattakorah
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t counter;
	const listint_t *hold;

	current = head;
	if (current == NULL)
		exit(98);

	counter = 0;
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		counter++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
