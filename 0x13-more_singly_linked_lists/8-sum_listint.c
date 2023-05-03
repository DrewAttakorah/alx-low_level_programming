#include "lists.h"

/**
 * sum_listint - get the sum of all the int `n` of a `listint_t` linked list
 * @head: a pointer to head
 * Return: a sum of all int `n`
 * drewattakorah
 */
int sum_listint(listint_t *head)
{
	int my_sum;
	listint_t *current;

	for (my_sum = 0, current = head; current != NULL; current = current->next)
		my_sum += current->n;

	return (sum);
}
