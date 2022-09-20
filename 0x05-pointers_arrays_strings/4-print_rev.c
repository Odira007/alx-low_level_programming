#include "main.h"

/**
 * print_rev - creates a function that reverses a string
 *
 * @s: the parameter
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
