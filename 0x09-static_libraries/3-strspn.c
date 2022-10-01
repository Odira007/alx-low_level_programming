#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first param
 * @accept: second param
 * Return: initial length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int initial_length;

	initial_length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				initial_length++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (initial_length);
		}
	}
	return (initial_length);
}

