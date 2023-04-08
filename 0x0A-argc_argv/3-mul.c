#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -print multiplies two numbers
 * @argc:count number of argument
 * @argv:string of the argument
 * @Return:1 if the argument is lesss then three otherwide 0;
 */
int main(int argc, char *argv[])
{
	int mult;

	int i;

	if (argc <= 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}

		printf("%d\n", mult);
	}

	return (0);
}
