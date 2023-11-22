#include "lists.h"

/**
 * get_nodeint_at_index - Find the nth node of a `listint_t` linked list
 * @head: a pointer to head node
 * @index: the index to find in linked list, starting at 0
 * Return: a pointer to node or NULL if failed
 * drewattakorah
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter;

	current = head;
	counter = 0;
	while (counter < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		counter++;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
