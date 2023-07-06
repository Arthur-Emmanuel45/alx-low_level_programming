#include "main.h"
/**
 * binary_to_unit -a function that converts a binary number to an unsigned int
 * @b: the char to convert
 * Return:  the converted number, or 0 if there is one
 * or more chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_unit(const char *b)
{
	int length;
	unsigned int num = 0, multiply = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (length = 0; b[length];)
		length++;
	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		num += (b[length] - '0') * multiply;
		multiply *= 2;
	}
	return (num);
}
