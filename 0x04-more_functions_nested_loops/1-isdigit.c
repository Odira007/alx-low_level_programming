#include "main.h"

/**
 * _isdigit - Writes a function that checks for a digit from zero through 9
 * @c: The argument to the function
 * Return: 1 or 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
