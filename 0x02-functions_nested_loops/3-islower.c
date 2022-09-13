#include "main.h"

/**
 * _islower - lowercase or not?
 * @c is used as the parameter of the function
 *
 * Description: Check if a letter is lowercase or not
 *
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
