#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of strings
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * strtol(argv[i], 0, 10);
		}
	}
	printf("%d\n", mul);
	return (0);
}
