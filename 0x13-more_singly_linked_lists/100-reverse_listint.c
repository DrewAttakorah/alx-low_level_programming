#include "lists.h"
#include <stdio.h>
/** 100-reverse_listint.c */

/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * cannot use `malloc` or `free` or arrays
 * a max of 2 variables.
 * Return: pointer to first node of reversed list
 * drewattakorah
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold;
	listint_t *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	hold = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (hold != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = hold;
		hold = (*head)->next;
	}

	(*head)->next = current;
	return (*head);
}
