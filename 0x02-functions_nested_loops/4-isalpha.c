#include "main.h"

/**
 * _isalpha - checksfor char alphabet
 * @c: the character to be checked
 *
 * Return: 1 if character is letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
