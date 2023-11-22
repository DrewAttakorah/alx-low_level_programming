#include "lists.h"

/**
 * free_listint - code will free a `listint_t` list
 * @head: a head of linked list
 * drewattakorah
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
