#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name to std out
 * @argc: argument count variable
 * @argv: array of strings
 * Return: Program name
 */

int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
