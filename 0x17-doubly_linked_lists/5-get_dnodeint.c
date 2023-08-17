#include "list.h"
/**
 * get_dnodeint_at_index -  a function that returns the nth node of a list
 * @head: a pointer to the head of the list
 * @index:  the index of the node, starting from 0
 * Return:  the nth node of a list or if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
