#include "lists.h"

/**
 * pop_listint - Delete the head node of our `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 * drewattakorah
 */
int pop_listint(listint_t **head)
{
	int my_num;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	hold = *head;
	my_num = hold->n;
	*head = hold->next;
	free(hold);

	return (my_num);
}

