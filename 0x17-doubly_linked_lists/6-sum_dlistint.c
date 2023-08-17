#include "list.h"
/**
 * sum_dlistint -  a function that returns the sum
 * of all the data (n) of a list
 * @head: a pointer to the head of thee list
 * Return: the sum of al the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
