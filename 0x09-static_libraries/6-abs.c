#include "main.h"

/**
 * _abs - absolute value
 *
 * @n: print the absolute value of a number
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
