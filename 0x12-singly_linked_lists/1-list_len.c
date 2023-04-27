#include "lists.h"
/**
 * print_list - function that Prints all the elements of a list_t list.
 * @h:the elements to check
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while(h)
	{
		ele++;
		h = h->next;
	}

	return (ele);
}
