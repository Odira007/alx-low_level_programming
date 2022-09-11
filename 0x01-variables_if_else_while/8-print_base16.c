#include <stdio.h>
#include <stdlib.h>

/**
 * main - Hex numbers
 *
 * Description: Print all hexadecimal base numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
