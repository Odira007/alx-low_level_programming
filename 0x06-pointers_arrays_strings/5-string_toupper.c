#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - converts all chars in a string to uppercase
 *
 * @str: the parameter
 *
 * Return: returns str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

	}
	return (str);
}
