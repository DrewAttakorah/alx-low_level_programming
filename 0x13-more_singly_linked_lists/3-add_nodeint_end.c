#include "lists.h"

/**
 * add_nodeint_end - this code will add a new node at the end of a `listint_t` list
 * @head: a double pointer to head node
 * @n: int value will be stored in new node
 * Return: Address of new element or NULL if failed
 * drewattakorah
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}
