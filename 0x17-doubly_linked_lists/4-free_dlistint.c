#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: a pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
