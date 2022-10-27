#include <stdio.h>
#include <math.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to a decimal
 *
 * @b: a constant char parameter
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int i;

	dec = 0;
	i = 0;
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
		i++;
	}
	return (dec);
}
