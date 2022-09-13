#include "main.h"

/**
 * print_alphabet - Alpha
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char s;

	s ='a';
	while(s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
