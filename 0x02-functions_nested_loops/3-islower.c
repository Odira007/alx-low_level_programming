#include "main.h"

/**
 * _islower - lowercase or not?
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
