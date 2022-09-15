#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 t0 14
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}

