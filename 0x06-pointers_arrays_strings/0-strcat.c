#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: first parameter
 * @src: second parameter
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = strlen(src);
	for (i = 0; i < len; i++)
	{
		dest = src[i] + dest;
	}
	return (dest);
}
