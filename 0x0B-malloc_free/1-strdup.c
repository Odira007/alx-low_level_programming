#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - count str
 * @s: array of elements
 * Return: i
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
 * _strcpy - copy src into dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;

	p = malloc(sizeof(char) * size);

	if (p == 0)
	{
		return (NULL);
	}
	_strcpy(p, str);
	return (p);
}
