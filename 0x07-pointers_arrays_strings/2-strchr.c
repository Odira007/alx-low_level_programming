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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
