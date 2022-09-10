#include <stdio.h>
#include <stdlib.h>

/**
 * main - NO q NO e
 *
 * Description: Print lowercase alphabets except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char f;
	char m;
	char l;

	f = 'a';
	m = 'f';
	l = 'r';
	while (f < 'e')
	{
		putchar(f);
		f = f + 1;
	}
	while (m > 'e' && m < 'q')
	{
		putchar(m);
		m = m + 1;
	}
	while (l > 'q' && l <= 'z')
	{
		putchar(l);
		l = l + 1;
	}
	putchar('\n');
	return (0);
}

