#include "function_pointers.h"
/**
 * int_index-function that searches for an interger
 * @array:the array the search
 * @size:the array size
 * @cmp:the pointer to function
 * Return:0,no element return -1, if size is less or equal to zerro -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
