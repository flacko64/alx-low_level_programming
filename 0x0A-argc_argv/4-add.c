#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}
	int result = 0;
	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		for (int j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n")
					return 1;
			}
		}
		result += atoi(arg);
	}
	printf("%d\n", result);
	return 0;
}
