#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Function that prints numbers from 0 to 9
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
