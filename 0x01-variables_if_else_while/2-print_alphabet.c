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
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	return (0);
	
}
