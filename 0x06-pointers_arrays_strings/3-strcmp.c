#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - write a function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: returns value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

