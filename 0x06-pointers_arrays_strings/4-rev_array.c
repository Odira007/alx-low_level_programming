#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array variable
 * @n: number of elements of the array
 * Return: returns reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}