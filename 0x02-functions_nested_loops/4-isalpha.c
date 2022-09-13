#include "main.h"

/**
 * _isalpha - lowercase or uppercase
 * @c: is the argument for the function
 *
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
