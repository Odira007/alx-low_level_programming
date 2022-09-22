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

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
		{
			continue;
		}
		else
		{
			break;
		}
	}
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
		return (0);
}

