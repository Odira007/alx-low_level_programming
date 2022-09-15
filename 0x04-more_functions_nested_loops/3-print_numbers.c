#include <stdio.h>
#include "main.h"

/**
 * print_numbers -Write a function that prints numbers from 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
