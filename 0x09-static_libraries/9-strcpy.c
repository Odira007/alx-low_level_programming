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
	int len;

	len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
