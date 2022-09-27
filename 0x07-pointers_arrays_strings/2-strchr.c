#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr -  function that locates a character in a string
 * @s: full string
 * @c: character to be located
 * Return: Returns c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
