#include "lists.h"

/**
 * add_nodeint - code adds new node at the start of a `listint_t` list
 * @head: a double pointer to head node
 * @n: int value will be stored in new node
 * Return: Address of new element or NULL if failed
 * drewattakorah
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;
	listint_t *new;

	hold = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (hold == NULL)
		new->next = NULL;
	else
		new->next = hold;

	return (new);
}
