#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main-print the result of the operations
 * @argc:count the num of argument
 * @argv:the array of arguments
 * Return:0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int bytes, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == bytes - 1)
		{
			continue;
		}
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
