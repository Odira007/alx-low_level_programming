#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 *
 * @size: the parameter
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
