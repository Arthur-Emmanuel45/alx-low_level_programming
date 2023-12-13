#include "search_algos.h"

void print_array(int *array, size_t i, size_t size);

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for in the array
 * Return:  the first index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, half = 0;

	if (array == NULL || value == 0)
		return (-1);

	print_array(array, low, size);
	while (low < high)
	{
		half = (low + high) / 2;
		if (array[half] < value)
		{
			low = half + 1;
			print_array(array, low, high + 1);
		}
		else if (array[half] > value)
		{
			high = half - 1;
			print_array(array, low, high + 1);
		}
		else
			return (array[half]);
	}
	return (-1);
}

/**
 * print_array - print all elements in an array
 * @array: element of the array
 * @i: index of the first element
 * @size: size of the array
 */
void print_array(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
