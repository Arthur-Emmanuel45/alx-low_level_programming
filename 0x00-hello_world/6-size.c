#include <stdio.h>

/**
 * main-size of vaarious data types
 * Return: this returns 0
 */

int main(void)
{
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %ld, %li byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lld, %lli byte(s)\n", sizeof(long long int));
	printf("Size of float: %f byte(s)\n", sizeof(float));
}
