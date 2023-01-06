#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);/* values null*/
}
