#include "main.h"

/**
 * print_numbers - Function that prints numbers from 0 to 9
 * @n: local variable
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
	return (0);
}
