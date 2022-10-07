#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find lenght of string
 * @s: the string
 * Return: returns length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenate n bytes of one string to another
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{}
	if (n > j)
	n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		return (0);
	}
	for (size = 0; size < i; size++)
	{
		p[size] = s1[size];
	}
	for (; size < (i + n); size++)
	{
		p[size] = s2[size - i];
	}
	p[size] = '\0';
	return (p);
}
