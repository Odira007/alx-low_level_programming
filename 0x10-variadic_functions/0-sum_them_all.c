#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
