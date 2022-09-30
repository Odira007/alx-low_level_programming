#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed to function
 * @argc: argument count variable
 * @argv: array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)*argv;
	for (i = 0; i <= argc; i++)
	{}
	printf("%d\n", i);
	return (0);
}
