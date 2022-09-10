#include <stdio.h>
#include <stdlib.h>

/**
 * main - Reverse
 *
 * Description: Print lowercase alphabets in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
