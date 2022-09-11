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

	for (n = '0'; n <= '8'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
