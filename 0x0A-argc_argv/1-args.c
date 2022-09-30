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
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
