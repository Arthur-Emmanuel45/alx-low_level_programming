#include "variadic_function.h"
/**
 * sum_them_all-function that returns the sum of all its parameters
 * @n:the arg
 * Return:the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list li;

	if (n == 0)
		return (0);

	va_start(li, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(li, int);
	}

	va_end(li);

	return (sum);
}
