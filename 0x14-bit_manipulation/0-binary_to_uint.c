#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is a pointer pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int add = 0, mult = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		add += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (add);
}
