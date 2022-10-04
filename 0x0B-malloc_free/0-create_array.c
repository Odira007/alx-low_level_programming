#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size in memory
 * @c: the character variable
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * size);
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			p[i] = c;
			i++;
		}
		return (p);
	}
}
