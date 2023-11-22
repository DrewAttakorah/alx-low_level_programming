#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of the `listint_t` list
 * @h: a linked list head
 * Return: number of nodes
 * drewattakorah-dev
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t counter;

	for (c = h, counter = 0; c != NULL; counter++, c = c->next)
		printf("%d\n", c->n);

	return (counter);
}
