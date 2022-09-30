#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 * @argv: argument count
 * @argv: array of strings
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (i >= 1 && i <= 9)
		{
			sum += strtol(argv[i], NULL, 10);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	return (0);
}
