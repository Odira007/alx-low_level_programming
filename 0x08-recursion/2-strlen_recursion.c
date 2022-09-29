#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - length of string
 * @s: the parameter
 * Return: returns string length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
