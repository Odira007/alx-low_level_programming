#include <stdio.h>
#include <stdlib.h>

/**
 * main - number combos
 *
 * Description: Print all combinations of single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
