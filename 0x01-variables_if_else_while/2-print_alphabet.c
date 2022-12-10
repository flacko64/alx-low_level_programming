#include <stdio.h>

/**
 * main - printing alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putvhar(letter);

	putchar('\n');

	return (0);
}
