#include "lists.h"
/**
 * print_dlistint -  the node struct
 * @h: a pointer to the head of the node
 * Return: the number of node in a linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
