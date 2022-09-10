#include <stdio.h>
#include <stdlib.h>

/**
 * main - Base ten
 *
 * Description: Print single digit numbers of base ten
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
