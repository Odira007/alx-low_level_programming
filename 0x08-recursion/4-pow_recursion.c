#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: the number to be raised
 * @y: the power
 * Return: power of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
