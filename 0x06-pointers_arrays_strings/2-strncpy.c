#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - write a function that copies a string
 *
 * @dest: where the string is being copied to
 * @src: the string that is being copied to dest
 * @n: the number of characters copied from src to dest
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0' && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
