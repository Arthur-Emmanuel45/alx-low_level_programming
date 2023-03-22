#include "main.h"
/**
 *print_times_table-print nth time table
 * @n:the nth time table
 * Return:void
 */
void print_times_table(int n)
{
	int num, multiply, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multiply = 1; multiply <= n; multiply++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * multiply;

				if (product <= 99)
					_putchar(' ');
					_putchar((product / 99) + '0');
					_putchar(((product / 99)) % 10 + '0');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 100)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
