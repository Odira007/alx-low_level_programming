#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed to function
 * @argc: argument count variable
 * @argv: array of strings
 * Return: number of args
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	(void)argc;
	printf("%d\n", argc);
	return (0);
}
