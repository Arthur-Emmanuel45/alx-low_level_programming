#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints num of argument passed to a string
 * @argc:count the num of argument
 * @argv:the string to count
 * Return:the number
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + argv[i];
		}

		print("%d/n", sum);
	}
}
