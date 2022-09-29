#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - prints a string with recursion
 * @s: the parameter
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

