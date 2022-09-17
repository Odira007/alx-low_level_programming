#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 *
 * Return: Always 0
 */

void print_number(int n)
{
	int i;
	int d = 1;
	unsigned int x = n;
	unsigned int y = n;
	int c = 0;

	if (n == 0)
	{
		putchar('0');
	}
	if (n < 0)
	{
		putchar('-');
		n = n + 1;
		n = -n;
		y = n;
		x = n;
		x += 1;
		y += 1;
	}
	while (x != 0)
	{
		x = x / 10;
		c++;
	}
	for (i = 1; i < c; i++)
	{
		d *= 10;
	}
	for (i = 0; i < c; i++)
	{
		putchar(y / d + '0');
		y = y % d;
		d = d / 10;
	}
	return (0);
}
