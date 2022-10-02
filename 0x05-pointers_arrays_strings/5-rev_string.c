#include "main.h"
#include <string.h>
#include "2-strlen.c"

/**
 * rev_string - Write a function that reverses a string
 * @s: the parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	char rev;
	int len;
	int n;

	len = strlen(s);
	n = len / 2;
	for (i = 0; i < n; i++)
	{
		rev  = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
