#include "main.h"
/**
 *_strlen_recursion-print the length of a string
 *@s:the string to return
 *Return:the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
	}
	return (_strlen_recursion(s + 1));
}
