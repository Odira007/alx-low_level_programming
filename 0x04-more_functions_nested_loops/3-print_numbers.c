#include "main.h"

/**
 * print_numbers -Write a function that prints numbers from 0 to 9
 * void: no argument to the function
 * @n: local variable
 * Return: always 0
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
