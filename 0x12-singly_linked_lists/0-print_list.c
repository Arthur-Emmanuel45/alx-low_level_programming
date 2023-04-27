#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that Prints all the elements of a list_t list.
 * @c:the elements to check
 * Return: The number of nodes
 */

size_t print_list(const list_t *c)
{
	size_t nodes = 0;

	while (c)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", c->len, c->str);

		nodes++;
		c = c->next;
	}

	return (nodes);
}
