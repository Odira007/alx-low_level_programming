#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: first param
 * @n: second param
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int inc;

	int inc;
	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar('\n');
}
