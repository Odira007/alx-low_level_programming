#include <stdio.h>
#include <stdlib.h>

/**
 * main - base ten
 *
 * Description: Print single digit base ten numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}	
