#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Description: Print lowercase alphabets 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char s;
	char t;

	t = 0;
	while (t <= 9)
	{
		s = 'a';
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		t++;
	}
}
