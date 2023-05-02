#include "lists.h"

/**
 * listint_len - look for the number of elements in a linked `listint_t` list
 * @h: a linked list head
 * Return: the code number of elements in linked list
 * drewattakorah
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t counter;

	for (c = h, counter = 0; c != NULL; counter++, c = c->next)
		;

	return (counter);
}
