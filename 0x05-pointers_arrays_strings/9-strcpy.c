#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy and paste string
 * @dest: first param
 * @src: second param
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
