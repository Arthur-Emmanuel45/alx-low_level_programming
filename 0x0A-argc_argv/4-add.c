#include <stdio.h>
#include <stdlib.h>

/**
 * main-program to adds positive numbers
 * @argc:count number of argument
 * @argv:string of the argument to add
 * Return:1 if num contains non-digits otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
