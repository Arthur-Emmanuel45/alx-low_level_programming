#include "main.h"
/**
 * _isalpha-checks if a character is alphabetic
 * @c:the character to be checked
 * Return:1 if a character is letter, lower or uppercase, o otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
