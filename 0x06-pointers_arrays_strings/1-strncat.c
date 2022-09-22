#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Write a function that concatenates two strings
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}
	for (i = 0; n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
