#include "main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string
 * @s: the parameter
 * Return: nothing
 */
void rev_string(char *s);

int main(void)
{
	char s[11] = "Holberton!";
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
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
