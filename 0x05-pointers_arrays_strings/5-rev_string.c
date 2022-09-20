#include "main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string
 * @s: the parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	char t;
	int len;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		t = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = t;
	}
	putchar('\n');
}
