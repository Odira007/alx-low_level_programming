#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;
	char *pp = src;

	for (i = 0; i < n; i++)
	{
		p[i] = pp[i];
	}
	return (dest);
}
