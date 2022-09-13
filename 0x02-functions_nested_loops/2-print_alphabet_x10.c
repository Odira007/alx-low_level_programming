#include "main.h"

/**
 * main - prints alphabets 10x
 *
 * Description: Print lowercase alphabets 10 times
 *
 * Return: 0 (Success)
 */
int main(void)
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
	return (0);
}
