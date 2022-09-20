#include "main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string
 * @s: the parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int len;

	len = strlen(s);
	while (len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
