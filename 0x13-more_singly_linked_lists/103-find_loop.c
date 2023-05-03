/** Bonus 103-find_loop.c */
#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find the loop in a linked list
 * @head: a head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * it can only declare a max of 2 variables.
 * Return: The address of node where loop begins, or NULL if no loop found.
 * drewattakorah
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *currents, *currentf;

	if (head == NULL)
		return (NULL);

	currents = currentf = head;
	do {
		if (currents->next)
			currents = currents->next;
		else
			return (NULL);

		if (currentf->next->next)
			currentf = currentf->next->next;
		else
			return (NULL);
	} while (currentf != currents);

	currents = head;
	while (currentf != currents)
	{
		currentf = currentf->next;
		currents = currents->next;
	}

	return (currents);
}
