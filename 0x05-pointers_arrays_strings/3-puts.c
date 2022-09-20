#include "main.h"
#include <stdio.h>

/**
 * _puts - write a function that prints a string
 * str - the parameter
 *
 * Return: nothing
 */
void _puts(char *str);

int main(void)
{
	char *str;

	str = "My name is Odira";
	_puts(str);
	return (0);
}

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
