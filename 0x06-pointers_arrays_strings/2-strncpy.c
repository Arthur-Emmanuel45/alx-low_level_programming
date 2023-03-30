#include "main.h"
/**
 *_strncpy-copies a sting
 *@dest:frist string to copy
 *@src:second string to copy
 *@n:number of byte to copy from src
 *Return:a pointer to the copied strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
