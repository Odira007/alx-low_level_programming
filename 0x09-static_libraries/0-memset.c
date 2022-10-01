#include <stdio.h>
#include <string.h>

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer to the memory area being filled
 * @b: the constant byte
 * @n: the number of bytes
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
