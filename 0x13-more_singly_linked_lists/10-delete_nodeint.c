#include "lists.h"

/**
 * delete_nodeint_at_index - it delete the node at index of a `listint_t` list
 * @head: a double header to head of linked list
 * @index: anindex of node to delete, starting at 0
 * Return: returns 1 if success, -1 if failed
 * drewattakorah
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *hold;
	unsigned int j;

	j = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (j < index)
	{
		j++;
		hold = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		hold->next = current->next;
	else
		hold->next = NULL;

	free(current);
	return (1);
}
