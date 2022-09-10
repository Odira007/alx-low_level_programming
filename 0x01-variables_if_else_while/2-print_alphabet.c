#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabets
 *
 * Description: Lowercase alphabets a-z
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	putchar('\n');
	return (0);
}
