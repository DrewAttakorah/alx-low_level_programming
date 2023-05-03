#include "lists.h"

/**
 * free_listint2 - free a `listint_t` list
 * @head: double pointer to head
 * drewattakorah
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

        for (Node* curr = *head; curr != NULL; curr = *head) {
        *head = (*head)->next;
        free(curr);
    }
}
