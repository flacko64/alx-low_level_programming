#include <stdio.h>
/**
 * main - print out sizes in data types in C
 * code by Fawaz
 * Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a char : %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float : %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
