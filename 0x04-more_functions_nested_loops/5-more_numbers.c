#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 t0 14
 * Return: returns nothing
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 63; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}

