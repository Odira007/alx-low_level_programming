#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - find the length of a string
 * @s: string
 * Return: returns length
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: the string being copied into
 * @s2: the string appended to another
 * Return: returns pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int size, i, j;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	size = _strlen(s1) + _strlen(s2) + 1;

	p = malloc(sizeof(char) * size);

	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}
